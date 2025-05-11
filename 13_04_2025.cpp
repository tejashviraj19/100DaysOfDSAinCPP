#include <iostream>
#include <vector>
using namespace std;

bool isSorted(const vector<int>& arr) {
    for (int i = 1; i < arr.size(); ++i) {
        if (arr[i] < arr[i - 1])
            return false;
    }
    return true;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};

    if (isSorted(arr))
        cout << "The array is sorted." << endl;
    else
        cout << "The array is not sorted." << endl;

    return 0;
}
