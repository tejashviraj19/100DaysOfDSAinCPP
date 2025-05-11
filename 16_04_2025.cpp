#include <iostream>
using namespace std;

int findMax(int arr[], int size) {
    int maxElement = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }
    return maxElement;
}

int main() {
    int arr[] = {12, 45, 7, 89, 34, 23};
    int size = sizeof(arr) / sizeof(arr[0]);

    int maxVal = findMax(arr, size);
    cout << "Largest element: " << maxVal << endl;

    return 0;
}
