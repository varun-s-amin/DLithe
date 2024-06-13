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
    
    int s1 =0;
    int s2 =1;
    int s3 = 0;
    
    if(num == 0) {
        cout << 0;
    } else if(num == 1) {
        cout << 1;
    } else {
        for(int i=2;i<=num;i++) {
            s3 = s1 + s2;
            s1 = s2;
            s2 =s3;
        }
        cout << s1;
    }
    return 0;
}
