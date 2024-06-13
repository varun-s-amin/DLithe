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
    for(int i=num;i>=0;i--) {
        for(int j=1;j<=i;j++) {
            cout << "*" ;
        }
        cout << endl;
    }
    return 0;
}
