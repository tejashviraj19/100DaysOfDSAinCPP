#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++)
        if (arr[i] == target)
            return i;
    return -1;
}

int main() {
    int arr[] = {4, 7, 1, 9, 3};
    int target = 9;
    int index = linearSearch(arr, 5, target);
    if (index != -1)
        cout << "Element found at index " << index << endl;
    else
        cout << "Element not found" << endl;
    return 0;
}
