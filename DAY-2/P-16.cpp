#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int x; //total coins
    int y; //long bens percentage
    int z; // blackbeards percentage
    
    cin >> x >> y >> z;
    
    int lbp = (x*y)/100;
    cout << lbp << endl;
    int bb = ((x-lbp)*z)/100;
    cout << bb << endl;
    int rem = (x-(lbp+bb)) / 3;
    cout << rem;
    return 0;
}
