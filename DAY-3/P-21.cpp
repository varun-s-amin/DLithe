#include <iostream>
using namespace std;

int main() {
    int fp, fd, fs;
    cin >> fp >> fd >> fs;

    int sp, sd, ss;
    cin >> sp >> sd >> ss;

    int ap, ad, as;
    cin >> ap >> ad >> as;

    int ft = static_cast<int>(fp - (fp * (fd * 0.01))) + fs;
    cout << "In Flipkart: Rs." << ft << endl;

    int st = static_cast<int>(sp - (sp * (sd * 0.01))) + ss;
    cout << "In Snapdeal: Rs." << st << endl;

    int at = static_cast<int>(ap - (ap * (ad * 0.01))) + as;
    cout << "In Amazon: Rs." << at << endl;

    if (ft < st && ft < at) {
        cout << "Choose Flipkart" << endl;
    } else if (st < ft && st < at) {
        cout << "Choose Snapdeal" << endl;
    } else if (at < ft && at < st) {
        cout << "Choose Amazon" << endl;
    } else {
        if (ft == st && ft == at) {
            cout << "Choose Flipkart" << endl;
        } else if (ft == st) {
            cout << "Choose Flipkart" << endl;
        } else if (ft == at) {
            cout << "Choose Flipkart" << endl;
        } else if (st == at) {
            cout << "Choose Snapdeal" << endl;
        }
    }
    return 0;
}
