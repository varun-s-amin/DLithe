/* Implement pow(x, n), which calculates x raised to the power n (i.e., xn).

Example 1:

Input: x = 2.00000, n = 10
Output: 1024.00000
*/

#include <iostream>

using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        if (n == 0) return 1;  // Any number raised to the power of 0 is 1

        // If n is negative, use the property x^(-n) = 1 / (x^n)
        long long N = n;
        if (N < 0) {
            x = 1 / x;
            N = -N;
        }

        double result = 1;
        double current_product = x;

        // Use fast exponentiation (exponentiation by squaring) for efficiency
        while (N > 0) {
            if (N % 2 == 1) {
                result *= current_product;
            }
            current_product *= current_product;
            N /= 2;
        }

        return result;
    }
};

int main() {
    Solution solution;
    double x;
    int n;
    cout << "Enter the base (x): ";
    cin >> x;
    cout << "Enter the exponent (n): ";
    cin >> n;
    
    double result = solution.myPow(x, n);
    cout << x << " raised to the power of " << n << " is: " << result << endl;
    
    return 0;
}
