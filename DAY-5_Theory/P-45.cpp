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
    int arr1[n1];
    for(int i=0;i<n1;i++) {
        cin >> arr1[i];
    }
    
    cin >> n2;
    int arr2[n2];
    for(int i=0;i<n2;i++) {
        cin >> arr2[i];
    }
    
    
    
    if(n1!=n2) {
        cout << "Incompatible" ;
    } else {
        int flag=0;
        for(int i=0;i<n1;i++) {
            if(arr1[i] >= arr2[i]) {
                flag = 1;
            } else {
                flag = 0;
                break;
            }
        }
        
        if(flag==1) {
            cout << "Compatible" << endl;
        } else {
            cout << "Incompatible" ;
        }
    }

    return 0;
}
