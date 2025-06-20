#include <iostream>
using namespace std;

int countDigit(int number, int digit) {
    int count = 0;
    while (number) {
        if (number % 10 == digit)
            count++;
        number /= 10;
    }
    return count;
}

int main() {
    int number = 122334, digit = 3;

    cout << "Digit " << digit << " occurs " << countDigit(number, digit) << " times." << endl;

    return 0;
};
