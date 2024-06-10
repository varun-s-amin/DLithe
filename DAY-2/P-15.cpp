#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int d1,d2;
    int c1,c2;
    
    cin >> d1 >> c1;
    cin >> d2 >> c2;
    
    
    int totc = c1 + c2;
    int totd = d1 + d2 + (totc/100);
    
    cout << totd << endl;
    cout << totc%100;
    return 0;
}
