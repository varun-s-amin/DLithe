#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int sumOfDigits(long long int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    long long int num;
    cin >> num;
    
    // Continuously sum the digits until the result is a single-digit number
    while (num > 9) {
        num = sumOfDigits(num);
    }
    
    cout << num << endl;
    return 0;
}
