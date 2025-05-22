#include <iostream>
using namespace std;

bool isSorted(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        if (arr[i] < arr[i - 1])
            return false;
    }
    return true;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    if (isSorted(arr, size))
        cout << "Array is sorted in ascending order." << endl;
    else
        cout << "Array is not sorted." << endl;

    return 0;
}
