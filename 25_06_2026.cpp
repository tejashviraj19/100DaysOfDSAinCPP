#include <iostream>
using namespace std;

int countSetBits(int n) {
    int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

int main() {
    int num = 15; // Binary: 1111
    cout << "Set bits: " << countSetBits(num) << endl;
    return 0;
}
