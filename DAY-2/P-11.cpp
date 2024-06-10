#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int friends;
    int teams;
    
    cin >> friends;
    cin >> teams;
    
    int res = friends%teams;
    int res1 = (friends-res)/teams;
    
    cout << "The number of friends in each team is " << res1 << " and left out is " << res;
    return 0;
}
