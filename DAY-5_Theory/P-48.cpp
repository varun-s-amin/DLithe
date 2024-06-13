#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n; //number of groups
    int m; // max capacity of the bus
    
    cin >> n >> m;
    int group[n];
    for(int i=0;i<n;i++) {
        cin >> group[i];
    }
    
    int busCount = 0;
    int capacity = 0;
    
    for(int i=0;i<n;i++) {
        if(capacity + group[i] <= m) {
            capacity += group[i];
        } else {
            busCount++;
            capacity = group[i];
        }
    }
    
    if(capacity > 0) {
       busCount++; 
    }
    cout <<  busCount;
    return 0;
}
