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
    
    int a[n];
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    
    int sume = 0;
    int sumo = 0;
    
    for(int i=0;i<n;i++) {
        if(a[i]%2==0) {
            sume += a[i];
        } else {
            sumo += a[i];
        }
    }
    
    cout << "The sum of the even numbers in the array is " << sume << endl;
    cout << "The sum of the odd numbers in the array is " << sumo << endl;
    return 0;
}
