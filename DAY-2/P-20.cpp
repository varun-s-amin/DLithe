#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int unit;
    cin >> unit;
    
    if(unit<=200) {
        int cost = unit*0.5;
        cout <<"Rs." << cost;
    } else if (unit<=400){
        int cost = unit*0.65+100;
        cout << "Rs." << cost;
    } else if (unit<=600){
        int cost = unit*0.80+200;
        cout << "Rs." << cost;
    } else {
        int cost = unit*1.25+425;
        cout << "Rs." << cost;
    }
    return 0;
}
