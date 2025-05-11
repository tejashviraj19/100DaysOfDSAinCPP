#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {12, 3, 45, 7, 89, 23, 1};

    int maxElement = arr[0];
    int minElement = arr[0];

    for (int i = 1; i < arr.size(); ++i) {
        if (arr[i] > maxElement)
            maxElement = arr[i];
        if (arr[i] < minElement)
            minElement = arr[i];
    }

    cout << "Maximum element: " << maxElement << endl;
    cout << "Minimum element: " << minElement << endl;

    return 0;
}
