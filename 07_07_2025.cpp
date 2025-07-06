#include <iostream>
using namespace std;

int countLowercase(string str) {
    int count = 0;
    for (char c : str)
        if (islower(c))
            count++;
    return count;
}

int main() {
    string s = "Hello World!";
    cout << "Lowercase letters: " << countLowercase(s) << endl;
    return 0;
}
