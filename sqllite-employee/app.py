import sqlite3

def list_all():
    con = sqlite3.connect("employee.sqlite3")
    cur = con.cursor()
    sql = "SELECT * FROM employee"
    sqlResult = cur.execute(sql)
    employee = sqlResult.fetchall()
    print(employee)

def createperson():
    code = input('employee code:')
    name = input('employee name:')
    job_title = input('employee job title:')
    salary = float(input('employee salary:'))
    con = sqlite3.connect("employee.sqlite3")
    cur = con.cursor()
    #sql = '''INSERT INTO employee(code,name,job_title,salary)
#VALUES('%s','%s','%s','%f')'''%(code,name,job_title,salary)
    sql = f'''INSERT INTO employee(code,name,job_title,salary)
VALUES('{code}','{name}','{job_title}','{salary}')'''
    sqlResult  = cur.execute(sql)
    con.commit()
    print('person is created successfully.')


def editperson():
    id = int(input('Enter person ID:'))
    con = sqlite3.connect("employee.sqlite3")
    cur = con.cursor()
    
    # Fetch the person details
    sql = "SELECT * FROM employee WHERE id = ?"
    cur.execute(sql, (id,))
    employee = cur.fetchone()
    
    if employee is None:
        print("No employee found with the given ID.")
        cur.close()
        con.close()
        return

    # Prompt for new details, using current values as defaults
    code = input(f'Employee code ({employee[1]}): ') or employee[1]
    name = input(f'Employee name ({employee[2]}): ') or employee[2]
    job_title = input(f'Employee job title ({employee[3]}): ') or employee[3]
    salary = input(f'Employee salary ({employee[4]}): ')
    salary = float(salary) if salary else employee[4]

    # Update the employee details
    sql = '''UPDATE employee
             SET code = ?, name = ?, job_title = ?, salary = ?
             WHERE id = ?'''
    cur.execute(sql, (code, name, job_title, salary, id))
    con.commit()
    
    print('employee is updated successfully.')
    
    cur.close()
    con.close()

def delete():
    id = int(input('Enter person ID:'))
    con = sqlite3.connect("employee.sqlite3")
    cur = con.cursor()
    
    # Fetch the person details
    sql = "SELECT * FROM employee WHERE id = ?"
    cur.execute(sql, (id,))
    employee = cur.fetchone()
    
    if employee is None:
        print("No employee found with the given ID.")
        cur.close()
        con.close()
        return
    
    print(f'Employee code ({employee[1]}): ')
    print(f'Employee code ({employee[2]}): ')
    print(f'Employee code ({employee[3]}): ')
    print(f'Employee code ({employee[4]}): ')
    confirm = input('Are you sure to delete(y/n)?')
    if confirm != 'y':
        return
    sql = f'''DELETE FROM employee
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
        pass
    elif choice == 4:
        delete()
    choice =  int(input(msg))



