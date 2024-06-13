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
    
    int arr[num];
    for(int i=0;i<num;i++) {
        cin >> arr[i];
    }
    
    for(int i=0;i<num;i++) {
        for(int j=0;j<num-1-i;j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j],arr[j+1]);
            }
        }
    }
    
    int min = 0;
    int max = num-1;
    
    while(max >= min) {
        if(arr[max]!=arr[min]) {
            cout << arr[max] << " " << arr[min] << endl;
            min++;
            max--;
        } else {
            cout << arr[max] << " " << 0 << endl;
            min++;
            max--;
        }
    }
    return 0;
}
