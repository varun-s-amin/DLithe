#include <iostream>

using namespace std;

int main() {
    // #1 
    enum BOOL {TRUE, FALSE}; // 0 -> TRUE, 1 -> FALSE

    // Use of BOOL enum
    BOOL isNumber = TRUE;
    cout << isNumber << endl;

    isNumber = FALSE;
    cout << isNumber << endl;

    // PEOPLE_TYPE enum
    enum PEOPLE_TYPE {STUD = 10, FACULTY = 20, GUEST = 30};

    PEOPLE_TYPE krishna_category = STUD;
    PEOPLE_TYPE mahesh_category = GUEST;

    cout << krishna_category << " " << mahesh_category << endl;

    return 0;
}

/*
    Enumeration types are used to define named constants with assigned index numbers
    to replace macro names.

    They offer better programming practices for programmers.
*/
