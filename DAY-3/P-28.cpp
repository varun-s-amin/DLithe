#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int rows,cols,trees;
    cin >> rows>>cols>>trees;
    bool res = false;
    
    if(trees>=1 && trees<=cols) {
        res = true;
    } else if(trees%cols == 1) {
        res = true;
    } else if(trees%cols == 0) {
        res = true;
    } 
    
    if(res) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    
    return 0;
}
