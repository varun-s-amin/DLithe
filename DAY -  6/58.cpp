#include <iostream>
using namespace std;

int main() {
    int m, n;
    // Read dimensions
    cin >> m >> n;
    
    int a[m][n], b[m][n], res[m][n];
    
    // Read first matrix
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    
    // Read second matrix
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> b[i][j];
        }
    }
    
    // Initialize the result matrix with 0
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            res[i][j] = 0;
        }
    }
    
    // Multiply matrices
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) { // Notice this loop should go from 0 to n
                res[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    
    // Print the result
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
