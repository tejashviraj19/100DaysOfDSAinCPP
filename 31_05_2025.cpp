#include <iostream>
using namespace std;

void computePrefixSum(int arr[], int prefix[], int size) {
    prefix[0] = arr[0];
    for (int i = 1; i < size; i++) {
        prefix[i] = prefix[i - 1] + arr[i];
    }
}

int main() {
    int arr[] = {2, 4, 6, 8, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int prefix[size];

    computePrefixSum(arr, prefix, size);

    cout << "Prefix sum array: ";
    for (int i = 0; i < size; i++) {
        cout << prefix[i] << " ";
    }
    cout << endl;

    return 0;
}
