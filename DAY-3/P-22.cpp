#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int month;
    double rent;
    int days;
    
    int cost = 0;
    
    cin >> month >> rent >> days;
    
    if(month <=12 && month >0) {
        if(month == 4 || month == 5 || month == 6 || month == 11 ||month == 12) {
            rent = rent + (rent * 0.2);
            cost = rent * days;
            cout << cost;
        } else {
            cost = rent * days;
            cout << cost;
        }
    } else {
        cout << "Invalid Input" << endl;
    }
    return 0;
}
