#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int len;
    int bre;
    cin >> len >> bre;
    
    int peri = 2 * (len + bre);
    int area = len * bre;
    
    cout << "The required length is " << peri << " m" << endl;
    cout << "The required area of carpet is " << area << " sqm";
    return 0;
}
