#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int X;
    int y;
    float r;
    
    
    cin >> X;
    cin >> y;
    cin >> r;
    
    float inte = (X * y * r)/100;
    cout << fixed << setprecision(2) << inte << endl;
   
    float amount = X + inte;
    cout << fixed << setprecision(2) << amount << endl;
    
    float discount = inte * 0.02;
    cout << fixed << setprecision(2) << discount << endl;
    
    float disAmount = amount - discount;
    cout << fixed << setprecision(2) << disAmount << endl;
    
    return 0;
}
