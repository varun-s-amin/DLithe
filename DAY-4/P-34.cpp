#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) {
        int pr = 0;

        if(i % 2 == 0) {
            pr = pow(i, 2) - 2;  // For even indices
        } else {
            pr = pow(i, 2) - 1;  // For odd indices
        }

        cout << pr << " ";
    }

    return 0;
}
