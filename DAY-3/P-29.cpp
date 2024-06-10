#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int balls, runs, runScored, ballBowled;
    cin >> balls >> runs >> runScored >> ballBowled;

    
    float over = balls / 6.0; // total number of overs

    int overf = ballBowled / 6; // total number of overs finished
    int f1 = ballBowled % 6; // remaining balls
    float f2 = overf + (float)f1 / 10; 


    float curRate = runScored / f2;

    
    float totRate = runs / over;

    cout << (int)over << endl;
    cout << fixed << setprecision(1) << f2 << endl;
    cout << fixed << setprecision(1) << curRate << endl;
    cout << fixed << setprecision(1) << totRate << endl;


    if (curRate >= totRate) {
        cout << "Eligible to Win" << endl;
    } else {
        cout << "Not Eligible to Win" << endl;
    }

    return 0;
}
