#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int x;
    int y;
    
    cin >> x;
    cin >> y;
    
    int res = sqrt(pow(x-3,2)+pow(y-4,2));
    cout << res;
    return 0;
}
