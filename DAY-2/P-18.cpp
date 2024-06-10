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
    
    int row = (n-1) / 3;
    int col = (n-1) % 3;
    cout << row <<" "<< col;
    return 0;
}
