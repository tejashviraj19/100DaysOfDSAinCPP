#include <iostream>
using namespace std;

string removeVowels(string str) {
    string result = "";
    for (char c : str) {
        char lower = tolower(c);
        if (lower != 'a' && lower != 'e' && lower != 'i' && lower != 'o' && lower != 'u')
            result += c;
    }
    return result;
}

int main() {
    string s = "DSA Journey";
    cout << "Without vowels: " << removeVowels(s) << endl;
    return 0;
}
