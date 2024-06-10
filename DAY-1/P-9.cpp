#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int a; // number of copies
    int b; // cost per copy
    int c; // cost spends per copy
    
    cin >> a;
    cin >> b;
    cin >> c;
    
    cout << (a*b)-((a*c)+100);
    return 0;
}
