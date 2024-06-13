#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void SelectionSort(int* arr,int n) {
    for(int i=0;i<n-1;i++) {
        int mini = i;
        for(int j=i+1;j<n;j++) {
            if(arr[mini] > arr[j]) {
                mini = j;
            }
        }
        if(i!=mini) {
            swap(arr[i],arr[mini]);
        }
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin >> n;
    
    int arr[n];
    for(int i=0;i<n;i++) {
        cin  >> arr[i];
    }
    
    SelectionSort(arr,n);
    cout << "The Sorted array is:" << endl;
    for(int i=0;i<n;i++) {
        cout << arr[i] << endl;
    }
    
    return 0;
}
