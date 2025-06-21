#include <iostream>
#include <string>
using namespace std;

int countVowels(string str) {
    int count = 0;
    for (char c : str) {
        c = tolower(c);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            count++;
    }
    return count;
}

int main() {
    string s = "OpenAI ChatGPT";
    cout << "Vowels: " << countVowels(s) << endl;
    return 0;
}
