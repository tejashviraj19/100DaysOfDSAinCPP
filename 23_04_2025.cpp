#include <iostream>
#include <unordered_set>
using namespace std;

void findIntersection(int arr1[], int size1, int arr2[], int size2) {
    unordered_set<int> set;
    
    for (int i = 0; i < size1; i++) {
        set.insert(arr1[i]);
    }
    
    cout << "Intersection of arrays: ";
    for (int i = 0; i < size2; i++) {
        if (set.find(arr2[i]) != set.end()) {
            cout << arr2[i] << " ";
            set.erase(arr2[i]);
        }
    }
    cout << endl;
}

int main() {
    int arr1[] = {1, 2, 4, 5};
    int arr2[] = {4, 5, 6, 7};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    
    findIntersection(arr1, size1, arr2, size2);
    
    return 0;
}
