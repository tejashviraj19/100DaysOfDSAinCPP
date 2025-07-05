#include <iostream>
using namespace std;

int power(int base, int exp) {
    int result = 1;
    while (exp--)
        result *= base;
    return result;
}

int main() {
    int base = 2, exponent = 5;
    cout << base << "^" << exponent << " = " << power(base, exponent) << endl;
    return 0;
}
