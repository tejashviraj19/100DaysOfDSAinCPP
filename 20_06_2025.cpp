#include <iostream>
using namespace std;

int removeDuplicates(int arr[], int n) {
    if (n == 0 || n == 1) return n;

    int j = 0;
    for (int i = 0; i < n - 1; i++)
        if (arr[i] != arr[i + 1])
            arr[j++] = arr[i];
    arr[j++] = arr[n - 1];

    return j;
}

int main() {
    int arr[] = {1, 1, 2, 2, 3, 4, 4};
    int n = sizeof(arr)/sizeof(arr[0]);

    int newSize = removeDuplicates(arr, n);
    for (int i = 0; i < newSize; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
