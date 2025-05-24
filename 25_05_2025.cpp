#include <iostream>
using namespace std;

void findMinMax(int arr[], int size) {
    int min = arr[0], max = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
    }

    cout << "Minimum: " << min << "\nMaximum: " << max << endl;
}

int main() {
    int arr[] = {10, 5, 3, 8, 2, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    findMinMax(arr, size);

    return 0;
}
