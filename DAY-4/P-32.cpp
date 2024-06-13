#include <iostream>
using namespace std;

int main() {
    int lowNum, highNum;
    cin >> lowNum >> highNum;

    for (int i = lowNum; i <= highNum; i++) {
        int sum = 0, mul = 1;
        int num = i;

        while (num > 0) {
            int digit = num % 10;
            sum += digit;
            mul *= digit;
            num /= 10;
        }

        if ((sum + mul) == i) {
            cout << i << endl;
        }
    }

    return 0;
}
