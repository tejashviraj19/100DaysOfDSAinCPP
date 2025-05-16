#include <iostream>
#include <unordered_map>
using namespace std;

int findFirstRepeating(int arr[], int size) {
    unordered_map<int, int> freq;

    // First pass: Count frequencies
    for (int i = 0; i < size; i++) {
        freq[arr[i]]++;
    }

    // Second pass: Find the first repeating element
    for (int i = 0; i < size; i++) {
        if (freq[arr[i]] > 1) {
            return arr[i];
        }
    }

    return -1; // No repeating element
}

int main() {
    int arr[] = {10, 5, 3, 4, 3, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = findFirstRepeating(arr, size);
    if (result != -1)
        cout << "First repeating element is: " << result << endl;
    else
        cout << "No repeating elements found." << endl;

    return 0;
}
