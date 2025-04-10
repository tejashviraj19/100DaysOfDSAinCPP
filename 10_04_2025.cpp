#include <iostream>
using namespace std;

int main() {
    int arr[6] = {12, 45, 7, 89, 23, 56};
    int maxVal = arr[0];

    for (int i = 1; i < 6; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }

    cout << "Maximum element is: " << maxVal << endl;

    return 0;
}
