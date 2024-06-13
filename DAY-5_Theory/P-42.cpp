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
    
    int a=1;
    int b = n*n+1;
    
    for(int i=n;i>=1;i--) {
        for(int m=0;m<n-i;m++) {
            cout << "--" ;
        }
        
        for (int n=0;n<i;n++) {
            cout << a++ << "*" ;
        }
        
        for (int p=0;p<i-1;p++) {
            cout << b++ << "*";
        }
        
        cout << b << endl;
         b = b - 2 * (i - 1);
    }
    
    
    
    return 0;
}
