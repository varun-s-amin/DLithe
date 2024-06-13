#include <iostream>
#include <vector>
using namespace std;

int findMissingPositive(int arr[],int n) {
    

    for (int i = 0; i < n; i++) {
        while (arr[i] > 0 && arr[i] <= n && arr[arr[i] - 1] != arr[i]) {
            swap(arr[i], arr[arr[i] - 1]);
        }
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] != i + 1) {
            return i + 1;
        }
    }

    return n + 1;
}

int main() {
    int num;
    cin >> num;

    int arr[num];
    for (int i = 0; i < num; i++) {
        cin >> arr[i];
    }

    int missing = findMissingPositive(arr,num);
    cout << missing << endl;

    return 0;
}
