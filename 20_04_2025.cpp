#include <iostream>
using namespace std;

int secondLargest(int arr[], int size) {
    int largest = arr[0];
    int secondLargest = -1;
    
    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    return secondLargest;
}

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int result = secondLargest(arr, size);
    
    if (result != -1)
        cout << "Second largest element is " << result << endl;
    else
        cout << "No second largest element." << endl;
    
    return 0;
}
