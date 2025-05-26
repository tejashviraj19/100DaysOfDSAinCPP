#include <iostream>
using namespace std;

void countEvenOdd(int arr[], int size) {
    int even = 0, odd = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    cout << "Even count: " << even << "\nOdd count: " << odd << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    countEvenOdd(arr, size);

    return 0;
}
