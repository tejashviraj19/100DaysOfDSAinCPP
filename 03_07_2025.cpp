#include <iostream>
using namespace std;

int countDigits(string str) {
    int count = 0;
    for (char c : str)
        if (isdigit(c))
            count++;
    return count;
}

int main() {
    string s = "abc123def456";
    cout << "Digits count: " << countDigits(s) << endl;
    return 0;
}
