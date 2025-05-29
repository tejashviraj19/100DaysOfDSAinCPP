#include <iostream>
using namespace std;

int findPeak(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if ((i == 0 || arr[i] >= arr[i - 1]) &&
            (i == size - 1 || arr[i] >= arr[i + 1]))
            return arr[i];
    }
    return -1;
}

int main() {
    int arr[] = {1, 3, 20, 4, 1, 0};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "A peak element is: " << findPeak(arr, size) << endl;

    return 0;
}
