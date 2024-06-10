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
    
    if(num<0) {
        num = -num;
        
    }
    int f = num / 1000;
        int l = num % 10;
        int sum = f+ l;
        cout << sum;
    return 0;
}
