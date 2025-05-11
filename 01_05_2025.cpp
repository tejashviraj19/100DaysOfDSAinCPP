#include <iostream>
#include <unordered_set>
using namespace std;

void removeDuplicates(int arr[], int& size) {
    unordered_set<int> set;
    int newSize = 0;
    
    for (int i = 0; i < size; i++) {
        if (set.find(arr[i]) == set.end()) {
            set.insert(arr[i]);
            arr[newSize++] = arr[i];
        }
    }
    
    size = newSize;
}

int main() {
    int arr[] = {1, 2, 3, 1, 2, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    removeDuplicates(arr, size);
    
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
