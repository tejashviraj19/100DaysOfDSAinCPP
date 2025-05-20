#include <iostream>
using namespace std;

void countFrequencies(int arr[], int size) {
    bool visited[100] = {false}; // assuming max element < 100

    for (int i = 0; i < size; i++) {
        if (visited[i])
            continue;

        int count = 1;
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                visited[j] = true;
                count++;
            }
        }

        cout << arr[i] << " occurs " << count << " time(s)" << endl;
    }
}

int main() {
    int arr[] = {10, 20, 10, 30, 10, 20};
    int size = sizeof(arr) / sizeof(arr[0]);

    countFrequencies(arr, size);

    return 0;
}
