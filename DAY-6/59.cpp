#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int m,n;
    cin >> m >> n;
    
    int arr[m][n];
    
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    
    int sum = 0;
    int k=0;
    while(k<m) {
        sum += arr[0][k];
        sum += arr[m-1][k];
        k++;
    }
    
    for(int k=1;k<n-1;k++) {
        sum += arr[k][n-k-1];
    }
    
    
    
    cout << "Sum of Zig-Zag pattern is " << sum;
    return 0;
}
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int m,n;
    cin >> m >> n;
    
    int arr[m][n];
    
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    
    int sum = 0;
    int k=0;
    while(k<m) {
        sum += arr[0][k];
        sum += arr[m-1][k];
        k++;
    }
    
    for(int k=1;k<n-1;k++) {
        sum += arr[k][n-k-1];
    }
    
    
    
    cout << "Sum of Zig-Zag pattern is " << sum;
    return 0;
}
