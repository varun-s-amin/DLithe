#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int month,year;
    cin >> year >> month;
    
    
    if((month >=1 && month <=12) && (year>=1900 && year<=9999)) {
        
        if ((month >= 1 && month <= 12) && (year >= 1900 && year <= 9999)) {
        if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
            cout << "31 Days";
        } else if (month == 4 || month == 6 || month == 9 || month == 11) {
            cout << "30 Days";
        } else { // February
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                cout << "29 Days"; // Leap year
            } else {
                cout << "28 Days"; // Non-leap year
            }
        }
    }
    } else {
        cout << "0 Days";
    }
    return 0;
}
