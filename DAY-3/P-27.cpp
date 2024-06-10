#include <iostream>
using namespace std;

int main() {
    int age, year, income, arrears;
    float test, att;

    // Read inputs
    cin >> age >> year >> income >> arrears >> test >> att;

    // Check eligibility conditions
    if (age >= 18 && age <= 21 && year >= 2021 && income <= 200000 && arrears <= 2 && test >= 60 && att >= 80) {
        cout << "Eligible" << endl;
    } else if (age >= 18 && age <= 21 && year >= 2021 && income >= 200000 && income < 250000 && arrears > 2 && test >= 80 && att >= 90) {
        cout << "Partially Eligible" << endl;
    } else {
        cout << "Not Eligible" << endl;
    }

    return 0;
}
