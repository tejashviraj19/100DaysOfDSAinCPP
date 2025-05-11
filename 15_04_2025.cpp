#include <iostream>
using namespace std;

int countDigits(int number) {
    int count = 0;
    while (number != 0) {
        number /= 10;
        count++;
    }
    return count;
}

int main() {
    int num = 123456;
    int digits = countDigits(num);
    cout << "Number of digits: " << digits << endl;

    return 0;
}
