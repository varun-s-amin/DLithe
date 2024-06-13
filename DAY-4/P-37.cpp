#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin >> n;
    int count = 0;
    cout << n << endl;
    while(n!=1) {
        if(n%2==0) {
            n /= 2;
            
        } else {
            n = (3*n+1);
        }
        cout << n << endl;
        count++;
    }
    cout << count;
    return 0;
}
