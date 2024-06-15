import sqlite3

def list_all():
    con = sqlite3.connect("example.db")
    cur = con.cursor()
    sql = "SELECT * FROM employees"
    sqlResult = cur.execute(sql)
    people = sqlResult.fetchall()
    print(people)

def createperson():
    name = input('Name of the person: ')
    salary = float(input('Salary of the person: '))
    con = sqlite3.connect("example.db")
    cur = con.cursor()
    sql = '''INSERT INTO employees(name, salary) VALUES (?, ?)'''
    cur.execute(sql, (name, salary))
    con.commit()
    print('Person is created successfully')
    cur.close()
    con.close()

def editperson():
    id = int(input('Enter the ID of the employee: '))
    
    # Establish database connection
    con = sqlite3.connect("example.db")
    cur = con.cursor()
    
    # Fetch the current details of the employee
    sql = "SELECT * FROM employees WHERE id = ?"
    sqlResult = cur.execute(sql, (id,))
    people = sqlResult.fetchone()
    
    if people is None:
        print(f"No employee found with ID {id}")
        cur.close()
        con.close()
        return
    
    # Prompt user for new details
    name = input(f'Name of the person ({people[1]}): ')
    salary_input = input(f'Salary of the person ({people[2]}): ')
    
    # Use the old values if new values are not provided
    if name == '':
        name = people[1]
    if salary_input == '':
        salary = people[2]
    else:
        salary = float(salary_input)
    
    # Update the employee details
    sql = '''UPDATE employees SET name = ?, salary = ? WHERE id = ?'''
    cur.execute(sql, (name, salary, id))
    con.commit()
    
    print('Person is updated successfully')
    
    # Close the cursor and connection
    cur.close()
    con.close()

def delete():
    id = int(input('Enter the ID of the employee: '))
    
    # Establish database connection
    con = sqlite3.connect("example.db")
    cur = con.cursor()
    
    # Fetch the current details of the employee
    sql = "SELECT * FROM employees WHERE id = ?"
    sqlResult = cur.execute(sql, (id,))
    people = sqlResult.fetchone()
    
    if people is None:
        print(f"No employee found with ID {id}")
        cur.close()
        con.close()
        return
    
    # Prompt user for new details
    print(f'name: {people[1]}')
    print(f'salary: {people[2]}')
    confirm = input('Are you sure to delete(y/n)?')
    if confirm != 'y':
        return
    sql = f'''DELETE FROM employees
WHERE id={id}'''
    sqlResult  = cur.execute(sql)
    con.commit()
    print('person is deleted successfully.')

msg = '''Choices are
               1 - create
               2 - list all
               3 - edit
               4 - delete
               5 - exit app \n'''

choice = int(input(msg))

while choice != 5:
    if choice == 1:
        createperson()
    elif choice == 2:
        list_all()
    elif choice == 3:
        editperson()
    elif choice == 4:
        delete()
    choice =  int(input(msg))
