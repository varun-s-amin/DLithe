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
    
    int arr[num][num];
    for(int i=0;i<num;i++) {
        for(int j=0;j<num;j++) {
            cin >> arr[i][j];
        }
    }
    
    for(int i=1;i<num;i++) {
        for(int j=0;j<i;j++) {
            if(arr[i][j]!=0) {
                cout << "Not an Upper triangular matrix" << endl;
                exit(0);
            }
        }
    }
    
    cout << "Upper triangular matrix" << endl;
    return 0;
}
