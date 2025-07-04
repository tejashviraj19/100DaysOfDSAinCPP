#include <iostream>
using namespace std;

int countAlphabets(string str) {
    int count = 0;
    for (char c : str)
        if (isalpha(c))
            count++;
    return count;
}

int main() {
    string s = "123abcXYZ!@#";
    cout << "Alphabets: " << countAlphabets(s) << endl;
    return 0;
}
