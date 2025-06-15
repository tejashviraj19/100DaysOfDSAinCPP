#include <iostream>
using namespace std;

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size-1; i++) {
        int minIdx = i;
        for (int j = i+1; j < size; j++)
            if (arr[j] < arr[minIdx])
                minIdx = j;
        swap(arr[i], arr[minIdx]);
    }
}

int main() {
    int arr[] = {29, 10, 14, 37, 13};
    int size = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, size);
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}
