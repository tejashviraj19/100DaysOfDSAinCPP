#include <iostream>
#include <unordered_map>
using namespace std;

void countFrequency(int arr[], int size) {
    unordered_map<int, int> freqMap;

    for (int i = 0; i < size; i++) {
        freqMap[arr[i]]++;
    }

    cout << "Element frequencies:\n";
    for (auto it : freqMap) {
        cout << it.first << " -> " << it.second << endl;
    }
}

int main() {
    int arr[] = {10, 20, 10, 30, 20, 10, 40};
    int size = sizeof(arr) / sizeof(arr[0]);

    countFrequency(arr, size);

    return 0;
}
