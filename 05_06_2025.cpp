#include <iostream>
using namespace std;

int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int findLCM(int a, int b) {
    return (a * b) / findGCD(a, b);
}

int main() {
    int num1 = 12, num2 = 18;

    cout << "LCM of " << num1 << " and " << num2 << " is " << findLCM(num1, num2) << endl;

    return 0;
}
