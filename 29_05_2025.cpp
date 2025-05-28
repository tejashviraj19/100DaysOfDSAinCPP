#include <iostream>
using namespace std;

int findSecondLargest(int arr[], int size) {
    int largest = INT_MIN, second = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
        } else if (arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }

    return second;
}

int main() {
    int arr[] = {10, 20, 4, 45, 99, 99};
    int size = sizeof(arr) / sizeof(arr[0]);

    int second = findSecondLargest(arr, size);
    if (second == INT_MIN)
        cout << "No second largest element exists." << endl;
    else
        cout << "Second largest element is: " << second << endl;

    return 0;
}
