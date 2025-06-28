#include <iostream>
using namespace std;

void printSubstrings(string str) {
    int n = str.length();
    for (int i = 0; i < n; i++)
        for (int j = i; j < n; j++)
            cout << str.substr(i, j - i + 1) << endl;
}

int main() {
    string s = "abc";
    printSubstrings(s);
    return 0;
}
