#include <iostream>
using namespace std;

int findMax(int arr[], int size) {
    int maxVal = arr[0];
    for (int i = 1; i < size; i++)
        if (arr[i] > maxVal)
            maxVal = arr[i];
    return maxVal;
}

int main() {
    int arr[] = {10, 25, 30, 50, 5};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout << "Maximum element: " << findMax(arr, size) << endl;
    return 0;
}
