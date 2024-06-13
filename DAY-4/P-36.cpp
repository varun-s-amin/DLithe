#include <iostream>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int b[3];
    for(int i = 0; i < 3; i++){
        cin >> b[i];
    }

    int max = b[0];
    int min = b[0];

    int sum = 0;
    for(int i = 0; i < 3; i++) {
        if(max <= b[i]) {
            max = b[i];
        }
        
        if(min >= b[i]) {
            min = b[i];
        }
        sum += b[i];
    }

    int sec = sum - (max + min);
    cout << "The treasure is in the box which has the number " << sec << endl;
    
    int div = 1;
    for (int i = 1; i <= min; i++) {
        if (b[0] % i == 0 && b[1] % i == 0 && b[2] % i == 0) {
            div = i;
        }
    }
    
    cout << "The code to open the box is " << div << endl;
    return 0;
}
