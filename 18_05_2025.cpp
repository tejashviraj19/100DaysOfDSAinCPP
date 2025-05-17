#include <iostream>
using namespace std;

int findSecondLargest(int arr[], int size) {
    if (size < 2) {
        return -1; // Not enough elements
    }

    int largest = arr[0];
    int second = -1;

    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
        } else if (arr[i] != largest && (second == -1 || arr[i] > second)) {
            second = arr[i];
        }
    }

    return second;
}

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = findSecondLargest(arr, size);
    if (result != -1)
        cout << "Second largest element is: " << result << endl;
    else
        cout << "No second largest element found." << endl;

    return 0;
}
