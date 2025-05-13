#include <iostream>
using namespace std;

int findSecondLargest(int arr[], int size) {
    if (size < 2) {
        cout << "Array doesn't have enough elements." << endl;
        return -1;
    }

    int first = INT_MIN, second = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    return (second == INT_MIN) ? -1 : second;
}

int main() {
    int arr[] = {10, 20, 4, 45, 99, 99};
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = findSecondLargest(arr, size);

    if (result != -1)
        cout << "Second largest element is: " << result << endl;
    else
        cout << "No second largest element found." << endl;

    return 0;
}
