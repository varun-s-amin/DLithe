#include <iostream>
using namespace std;

int fibb_term() { // Fibonacci sequence generator
    static int first = 0, second = 1;
    int next = first;
    int third = first + second;
    first = second;
    second = third;
    return next;
}

int series_term() { // Sequence 5, 6, 8, 11, 15, ...
    static int first = 5, diff = 1;
    int next = first;
    first = first + diff;
    diff++;
    return next;
}

int main() {
    cout << "Fibonacci series:\n";
    for (int i = 1; i <= 10; i++) {
        cout << fibb_term() << " ";
    }

    cout << "\n\nSeries 5, 6, 8, 11, 15, ....:\n";
    for (int i = 1; i <= 10; i++) {
        cout << series_term() << " ";
    }

    return 0;
}
