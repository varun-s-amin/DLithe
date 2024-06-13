#include <iostream>
using namespace std;

void insertElement(int* arr, int& size, int pos, int ele) {
        // Shift elements to the right
        for (int i = size; i >= pos; i--) {
            arr[i] = arr[i - 1];
        }
        // Insert the new element
        arr[pos - 1] = ele;
        // Increment the size
        size++;
        
        // Output the array after insertion
        cout << "Array after insertion is" << endl;
        for (int i = 0; i < size; i++) {
            cout << arr[i] << endl;
        }
}

int main() {
    int size;
    cin >> size;
    
    int arr[100000];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int pos, ele;
    cin >> pos;
    cin >> ele;
    
    if (pos > size) {
        cout << "Invalid Input" << endl;
    } else {
        insertElement(arr, size, pos, ele);
    }

    

    return 0;
}
