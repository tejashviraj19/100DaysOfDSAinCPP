#include <iostream>
#include <vector>
using namespace std;

void sieve(int n) {
    vector<bool> prime(n+1, true);
    prime[0] = prime[1] = false;

    for (int p = 2; p * p <= n; p++) {
        if (prime[p]) {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }

    for (int i = 2; i <= n; i++)
        if (prime[i])
            cout << i << " ";
    cout << endl;
}

int main() {
    int n = 50;
    sieve(n);
    return 0;
}
