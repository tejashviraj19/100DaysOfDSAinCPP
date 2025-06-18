#include <iostream>
using namespace std;

void mergeArrays(int a[], int b[], int m, int n) {
    int merged[m + n];
    int i = 0, j = 0, k = 0;

    while (i < m && j < n) {
        if (a[i] < b[j])
            merged[k++] = a[i++];
        else
            merged[k++] = b[j++];
    }

    while (i < m) merged[k++] = a[i++];
    while (j < n) merged[k++] = b[j++];

    for (int i = 0; i < m + n; i++)
        cout << merged[i] << " ";
    cout << endl;
}

int main() {
    int arr1[] = {1, 3, 5};
    int arr2[] = {2, 4, 6};
    mergeArrays(arr1, arr2, 3, 3);
    return 0;
}
