#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    struct Emp{
        int num;             
        char name[255];     
        float salary;       
        char job_title[50]; 
    };                       
    
    struct Emp deekshith;
    deekshith.num = 403;
    strcpy(deekshith.name,"Deekshith");
    deekshith.salary = 60000.0f;
    strcpy(deekshith.job_title,"architect");
    cout << deekshith.num << endl
    << deekshith.name << endl << deekshith.job_title << endl << deekshith.salary;
       
    return 0;
}