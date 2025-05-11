#include <iostream>
#include <vector>
using namespace std;

int findLargest(const vector<int>& arr) {
    int maxVal = arr[0];
    for (int num : arr) {
        if (num > maxVal)
            maxVal = num;
    }
    return maxVal;
}

int main() {
    vector<int> arr = {3, 7, 2, 9, 5};

    int largest = findLargest(arr);
    cout << "The largest element is: " << largest << endl;

    return 0;
}
