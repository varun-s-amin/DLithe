#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    if (n <= 2) {
        return 0;
    }
    
    bool a[n+1];
    fill(a, a + n + 1, true);
    
    a[0] = a[1] = false;
    
    for (int i = 2; i <= sqrt(n); i++) {  //implementation
        if (a[i]) { 
            for (int j = i * i; j <= n; j += i) {
                a[j] = false; 
            }
        }
    }
    
    for (int i = 2; i <= n; i++) {
        if (a[i]) {
            cout << i << " ";
        }
    }
    cout << endl;
    
    return 0;
}
