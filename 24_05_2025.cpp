#include <iostream>
using namespace std;

bool exists(int arr[], int size, int value) {
    for (int i = 0; i < size; i++)
        if (arr[i] == value)
            return true;
    return false;
}

void findUnion(int arr1[], int size1, int arr2[], int size2) {
    int unionArr[100], index = 0;

    for (int i = 0; i < size1; i++)
        if (!exists(unionArr, index, arr1[i]))
            unionArr[index++] = arr1[i];

    for (int i = 0; i < size2; i++)
        if (!exists(unionArr, index, arr2[i]))
            unionArr[index++] = arr2[i];

    cout << "Union: ";
    for (int i = 0; i < index; i++)
        cout << unionArr[i] << " ";
    cout << endl;
}

int main() {
    int arr1[] = {1, 2, 4, 5};
    int arr2[] = {2, 3, 5, 6};

    findUnion(arr1, 4, arr2, 4);

    return 0;
}
