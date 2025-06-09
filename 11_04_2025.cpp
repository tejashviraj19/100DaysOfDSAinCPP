#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int arr[] = {1, 3, 2, 1, 4, 1, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    unordered_map<int, int> freq;
    
    for(int i = 0; i < n; ++i) {
        freq[arr[i]]++;
    }

    cout << "Element Frequency:\n";
    for(auto pair : freq) {
        cout << pair.first << " : " << pair.second << endl;
    }

    return 0;
};
