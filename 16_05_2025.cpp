#include <iostream>
using namespace std;

int findMissingNumber(int arr[], int n) {
    int totalSum = n * (n + 1) / 2; // sum of first n natural numbers
    int arraySum = 0;

    for (int i = 0; i < n - 1; i++) {
        arraySum += arr[i];
    }

    return totalSum - arraySum;
}

int main() {
    int arr[] = {1, 2, 4, 5, 6}; // 3 is missing
    int n = 6;

    int missing = findMissingNumber(arr, n);
    cout << "Missing number is: " << missing << endl;

    return 0;
}
