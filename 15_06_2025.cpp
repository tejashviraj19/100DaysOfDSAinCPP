#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == target) return mid;
        else if (arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

int main() {
    int arr[] = {1, 3, 5, 7, 9};
    int target = 5;
    int index = binarySearch(arr, 5, target);
    if (index != -1)
        cout << "Found at index " << index << endl;
    else
        cout << "Not found" << endl;
    return 0;
}
