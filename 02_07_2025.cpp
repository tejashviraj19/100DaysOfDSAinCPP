#include <iostream>
#include <cmath>
using namespace std;

bool isPerfectSquare(int n) {
    int root = sqrt(n);
    return root * root == n;
}

int main() {
    int num = 49;
    if (isPerfectSquare(num))
        cout << num << " is a perfect square" << endl;
    else
        cout << num << " is not a perfect square" << endl;
    return 0;
}
