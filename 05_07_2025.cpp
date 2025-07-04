#include <iostream>
#include <string>
using namespace std;

string toUpper(string str) {
    for (char &c : str)
        c = toupper(c);
    return str;
}

int main() {
    string s = "dsa challenge";
    cout << "Uppercase: " << toUpper(s) << endl;
    return 0;
}
