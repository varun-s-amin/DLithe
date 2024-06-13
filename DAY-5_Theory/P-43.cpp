#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n1,n2;
    cin >> n1;
    cin >> n2;
    
    int arr1[n1],arr2[n2];
    
    
    for(int i=0;i<n1;i++) {
        cin >> arr1[i];
    }
    
    for(int i=0;i<n2;i++) {
        cin >> arr2[i];
    }
    
    int sum1 = 0;
    int sum2 = 0;
    if(n1==n2) {
        for(int i=0;i<n1;i++) {
            sum1 += arr1[i];
            sum2 += arr2[i];
        }
        if(sum1==sum2) {
            cout << "Same" << endl;
        } else {
            cout << "Not Same" << endl;
        }
    } else {
        cout << "Not Same" << endl;
    }
    
    
    return 0;
}
