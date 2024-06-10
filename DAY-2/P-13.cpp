#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    float x1,x2;
    float y1,y2;
    
    cin >> x1 >> x2;
    cin >> y1 >> y2;
    
    float mid1 = (x1+y1)/2;
    float mid2 = (x2+y2)/2;
    cout << "Arun's house is located at(" << fixed << setprecision(1) << mid1 << "," << mid2 <<")";
    return 0;
}
