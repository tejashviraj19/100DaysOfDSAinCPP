#include <iostream>
using namespace std;

void findDuplicates(int arr[], int size) {
    bool found = false;

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                cout << "Duplicate found: " << arr[i] << endl;
                found = true;
                break;
            }
        }
    }

    if (!found)
        cout << "No duplicates found." << endl;
}

int main() {
    int arr[] = {1, 2, 3, 2, 4, 5, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    findDuplicates(arr, size);

    return 0;
}
