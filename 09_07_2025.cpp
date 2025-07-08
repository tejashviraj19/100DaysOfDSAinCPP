#include <iostream>
using namespace std;

void printFactors(int n) {
    cout << "Factors of " << n << ": ";
    for (int i = 1; i <= n; i++)
        if (n % i == 0)
            cout << i << " ";
    cout << endl;
}

int main() {
    int num = 36;
    printFactors(num);
    return 0;
}
