#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int m,n;
    cin >> m >> n;
    
    int matrix[m][n];
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            cin >> matrix[i][j];
        }
    }
    
    for(int j = 0; j < n; j++) {
        int maxInColumn = INT_MIN;
        for(int i = 0; i < m; i++) {
            if(matrix[i][j] > maxInColumn) {
                maxInColumn = matrix[i][j];
            }
        }
        cout << maxInColumn << endl;
    }
    return 0;
}
