#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int factorial(int n) {
    if(n==0 || n==1) {
        return 1;
    } else {
        return (n*factorial(n-1));
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int num;
    cin >> num;
    int init = num;
    int sum = 0;
    while(num) {
        sum += factorial(num%10);
        num /= 10;
    }
    
    if(sum == init){
        cout << "Yes";
    } else {
        cout << "No";
    }
    
    return 0;
}
