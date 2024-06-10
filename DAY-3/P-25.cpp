#include <iostream>
using namespace std;

int main() {
    int hours[7];

    for (int i = 0; i < 7; i++) {
        cin >> hours[i];
    }

    // Sunday rate calculation
    int sun = hours[0];
    int rate1 = sun * 150;

    // Saturday rate calculation
    int sat = hours[6];
    int rate7 = sat * 125;

    int mon = hours[1], tue = hours[2], wed = hours[3], thu = hours[4], fri = hours[5];
    int rate2, rate3, rate4, rate5, rate6, bonus, bonusRate;

    // Monday rate calculation
    if (mon <= 8) {
        rate2 = mon * 100;
    } else {
        bonus = mon - 8;
        bonusRate = bonus * 115;
        rate2 = bonusRate + 800; // 800 is 8 * 100 (base pay for 8 hours)
    }

    // Tuesday rate calculation
    if (tue <= 8) {
        rate3 = tue * 100;
    } else {
        bonus = tue - 8;
        bonusRate = bonus * 115;
        rate3 = bonusRate + 800;
    }

    // Wednesday rate calculation
    if (wed <= 8) {
        rate4 = wed * 100;
    } else {
        bonus = wed - 8;
        bonusRate = bonus * 115;
        rate4 = bonusRate + 800;
    }

    // Thursday rate calculation
    if (thu <= 8) {
        rate5 = thu * 100;
    } else {
        bonus = thu - 8;
        bonusRate = bonus * 115;
        rate5 = bonusRate + 800;
    }

    // Friday rate calculation
    if (fri <= 8) {
        rate6 = fri * 100;
    } else {
        bonus = fri - 8;
        bonusRate = bonus * 115;
        rate6 = bonusRate + 800;
    }

    // Calculate total weekly rate
    int totalRate = rate1 + rate2 + rate3 + rate4 + rate5 + rate6 + rate7;
    cout << totalRate << endl;

    return 0;
}
