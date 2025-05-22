#include <iostream>
using namespace std;

// Function to check if array is sorted in ascending order
bool isSorted(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        if (arr[i] < arr[i - 1])
            return false;
    }
    return true;
}

int main() {
    int size;
    cout << "Enter the number of elements in the array: ";
    cin >> size;

    int arr[size];  // Variable-length array (OK in most compilers)

    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    if (isSorted(arr, size))
        cout << "✅ Array is sorted in ascending order." << endl;
    else
        cout << "❌ Array is not sorted in ascending order." << endl;

    return 0;
}
