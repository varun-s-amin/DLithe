#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    char in;
    cin >> in;
    
    if(isalpha(in)) {
        
        if(in == 'A' || in == 'E' || in == 'I' || in == 'O' || in == 'U' ||in == 'a' || in == 'e' || in == 'i' || in == 'o' || in == 'u') {
            cout << "Vowel" << endl;
        } else {
            cout << "Consonant" << endl;
        }
    } else {
        cout << "Not an alphabet" << endl;
    }
    
    
    
    return 0;
}   
