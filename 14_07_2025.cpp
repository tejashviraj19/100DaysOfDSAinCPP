#include <iostream>
using namespace std;

int reverseNumber(int n) {
    int rev = 0;
    while (n != 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    return rev;
}

int main() {
    int num = 12345;
    cout << "Reversed: " << reverseNumber(num) << endl;
    return 0;
}
