#include <iostream>
#include <unordered_set>
using namespace std;

void findUnion(int arr1[], int size1, int arr2[], int size2) {
    unordered_set<int> set;
    
    for (int i = 0; i < size1; i++) {
        set.insert(arr1[i]);
    }
    
    for (int i = 0; i < size2; i++) {
        set.insert(arr2[i]);
    }
    
    cout << "Union of arrays: ";
    for (auto elem : set) {
        cout << elem << " ";
    }
    cout << endl;
}

int main() {
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {3, 4, 5, 6};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    
    findUnion(arr1, size1, arr2, size2);
    
    return 0;
}
