#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int num) {
    int original = num, sum = 0, digits = 0;

    int temp = num;
    while (temp) {
        digits++;
        temp /= 10;
    }

    temp = num;
    while (temp) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    return sum == original;
}

int main() {
    int number = 153;
    if (isArmstrong(number))
        cout << number << " is an Armstrong number" << endl;
    else
        cout << number << " is not an Armstrong number" << endl;
    return 0;
}
