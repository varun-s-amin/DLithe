/* 7. Reverse Integer
Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

Example 1:

Input: x = 123
Output: 321 */

#include <iostream>
#include <climits> // For INT_MAX and INT_MIN

using namespace std;

class Solution {
public:
    int reverse(int x) {
        long rev = 0;
        while (x != 0) {
            int pop = x % 10; // Get the last digit
            x /= 10; // Remove the last digit
            
            // Check for overflow before multiplying by 10 and adding the digit
            if (rev > INT_MAX/10 || (rev == INT_MAX / 10 && pop > 7)) {
                return 0;
            }
            if (rev < INT_MIN/10 || (rev == INT_MIN / 10 && pop < -8)) {
                return 0;
            }
            
            rev = rev * 10 + pop; // Add the digit to the reversed number
        }
        return rev;
    }
};

int main() {
    Solution solution;
    int x;
    cout << "Enter an integer to reverse: ";
    cin >> x;
    
    int result = solution.reverse(x);
    cout << "Reversed integer: " << result << endl;
    
    return 0;
}
