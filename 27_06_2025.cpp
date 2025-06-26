#include <iostream>
#include <string>
using namespace std;

int binaryToDecimal(string binary) {
    int result = 0;
    for (char c : binary)
        result = result * 2 + (c - '0');
    return result;
}

int main() {
    string bin = "1010";
    cout << "Decimal: " << binaryToDecimal(bin) << endl;
    return 0;
}
