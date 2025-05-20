#include <iostream>
using namespace std;

void findPairsWithSum(int arr[], int size, int targetSum) {
    bool found = false;

    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] + arr[j] == targetSum) {
                cout << "Pair found: (" << arr[i] << ", " << arr[j] << ")\n";
                found = true;
            }
        }
    }

    if (!found) {
        cout << "No pairs found with the given sum." << endl;
    }
}

int main() {
    int arr[] = {1, 5, 7, -1, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int targetSum = 6;

    findPairsWithSum(arr, size, targetSum);

    return 0;
}
