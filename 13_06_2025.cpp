#include <iostream>
using namespace std;

int findMin(int arr[], int size) {
    int minVal = arr[0];
    for (int i = 1; i < size; i++)
        if (arr[i] < minVal)
            minVal = arr[i];
    return minVal;
}

int main() {
    int arr[] = {22, 11, 5, 66, 8};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout << "Minimum element: " << findMin(arr, size) << endl;
    return 0;
}
