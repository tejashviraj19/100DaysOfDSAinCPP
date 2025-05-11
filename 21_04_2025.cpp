#include <iostream>
#include <unordered_map>
using namespace std;

void countFrequency(int arr[], int size) {
    unordered_map<int, int> freq;
    
    for (int i = 0; i < size; i++) {
        freq[arr[i]]++;
    }
    
    for (auto& elem : freq) {
        cout << "Element " << elem.first << " appears " << elem.second << " times." << endl;
    }
}

int main() {
    int arr[] = {4, 5, 6, 5, 4, 4, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    countFrequency(arr, size);
    
    return 0;
}
