#include <iostream>
using namespace std;

void decimalToBinary(int n) {
    if (n == 0) {
        cout << 0 << endl;
        return;
    }

    string binary = "";
    while (n > 0) {
        binary = to_string(n % 2) + binary;
        n /= 2;
    }

    cout << "Binary: " << binary << endl;
}

int main() {
    int num = 25;
    decimalToBinary(num);
    return 0;
}
