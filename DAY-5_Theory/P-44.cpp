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
    
    int count = 0;
    for(int i=0;i<n;i++) {
        if(a[i]!=a[i+1]) {
            count++;
        }
    }
    
    cout << "There are " << count << " distinct element in the array.";
    return 0;
}
