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
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++)
        {
           if(j==0||j==n-1 || i==0||i==n-1) {
                cout << "*";
            } else {
               cout << " ";
           }
        }
        cout << endl;
    }
    return 0;
    
    
}
