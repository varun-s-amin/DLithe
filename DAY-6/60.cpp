#include <cmath>
#include <cstdio>
#include <cstring>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int num;
    cin >> num;
    
    for(int i=0;i<num;i++) {
        long input;
        cin >> input;
        
        string str = to_string(input);
        int left = 0;
        int right = str.size() -1;
        
        while(left<right){
            while(left < right && str[left] == '1') {
                left++;
            }
            
            while(left < right && str[right] == '0') {
                right--;
            }
            
            if(left < right) {
                swap(str[left], str[right]);
                left++;
                right--;
            }
        }
        
        cout << stoi(str) << endl;
    }
    return 0;
}
