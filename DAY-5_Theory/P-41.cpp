#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num;
    cin >> num;
    
    
    if (num == 1) {
        cout << "Kaprekar Number" << endl;
        return 0;
    }

    long square = num * num;  
    long temp = square;
    int numDigits = 0;

    while (temp) {
        numDigits++;
        temp /= 10;
    }
    
    bool isKaprekar = false;
    long div = 1;
    for (int i = 1; i < numDigits; i++) {
        div *= 10;
        long part1 = square / div;  // The left part
        long part2 = square % div;  // The right part

        if (part1 + part2 == num) {  // part2 should not be zero to be a valid split
            isKaprekar = true;
            break;
        }
    }

    if (isKaprekar) {
        cout << "Kaprekar Number" << endl;
    } else {
        cout << "Not a Kaprekar Number" << endl;
    }

    return 0;
}
