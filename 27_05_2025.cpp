#include <iostream>
using namespace std;

void countPosNegZero(int arr[], int size) {
    int pos = 0, neg = 0, zero = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] > 0)
            pos++;
        else if (arr[i] < 0)
            neg++;
        else
            zero++;
    }

    cout << "Positive: " << pos << ", Negative: " << neg << ", Zero: " << zero << endl;
}

int main() {
    int arr[] = {-1, 0, 2, -3, 5, 0};
    int size = sizeof(arr) / sizeof(arr[0]);

    countPosNegZero(arr, size);

    return 0;
}
