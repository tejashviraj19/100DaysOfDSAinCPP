#include <iostream>
using namespace std;

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int a = 12, b = 15;
    cout << "LCM of " << a << " and " << b << " is: " << lcm(a, b) << endl;
    return 0;
}
