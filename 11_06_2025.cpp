#include <iostream>
using namespace std;

void countFrequency(int arr[], int size) {
    bool visited[100] = {false};

    for (int i = 0; i < size; i++) {
        if (visited[i]) continue;

        int count = 1;
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                visited[j] = true;
                count++;
            }
        }
        cout << arr[i] << " appears " << count << " times." << endl;
    }
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 1, 5, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    countFrequency(arr, size);

    return 0;
}
