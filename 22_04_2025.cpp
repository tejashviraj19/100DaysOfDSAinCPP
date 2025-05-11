#include <iostream>
using namespace std;

int findMissingNumber(int arr[], int size) {
    int sum = (size + 1) * (size + 2) / 2;
    int arrSum = 0;
    
    for (int i = 0; i < size; i++) {
        arrSum += arr[i];
    }
    
    return sum - arrSum;
}

int main() {
    int arr[] = {1, 2, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    cout << "The missing number is: " << findMissingNumber(arr, size) << endl;
    return 0;
}
