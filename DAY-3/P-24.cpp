#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int num;
    cin >> num;
    if(num>99 && num<=999) {
        int m = (num/10)%10;
        if(m%3==0){
            cout << "Trendy Number" << endl;
        } else {
            cout << "Not a Trendy Number" <<endl;
        }
    } else {
        cout << "Invalid Number" << endl;
    }
    return 0;
}