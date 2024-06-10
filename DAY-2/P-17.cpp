#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int num;
    cin >> num;
    if(num>99 && num<=999) {
        string numb = to_string(num);
        reverse(numb.begin(),numb.end());
        cout << numb;
    }
    return 0;
}
