#include <iostream>
using namespace std;

int countSetBits(int num) {
    int count = 0;

    while (num) {
        count += num & 1;
        num >>= 1;
    }

    return count;
}

int main() {
    int number = 29; // Binary: 11101

    cout << "Set bits in " << number << " = " << countSetBits(number) << endl;

    return 0;
}
