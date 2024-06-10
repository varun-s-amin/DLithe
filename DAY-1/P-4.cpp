#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    string name;
    int age;
    float gpa;
    char grade;
    
    cin >> name;
    cin >> age;
    cin >> gpa;
    cin >> grade;
    
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "CGPA: " << fixed << setprecision(2) << floor(gpa * 100)/100 << endl;
    cout << "Grade: " << grade << endl;
    return 0;
}
