#include <iostream>
using namespace std;

void moveZerosToEnd(int arr[], int size) {
    int index = 0; // Position to place non-zero

    for (int i = 0; i < size; i++) {
        if (arr[i] != 0) {
            arr[index++] = arr[i];
        }
    }

    while (index < size) {
        arr[index++] = 0;
    }
}

int main() {
    int arr[] = {0, 1, 0, 3, 12};
    int size = sizeof(arr) / sizeof(arr[0]);

    moveZerosToEnd(arr, size);

    cout << "Array after moving zeros: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
