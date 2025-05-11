#include <iostream>
#include <string>
using namespace std;

void countVowelsConsonants(string str) {
    int vowels = 0, consonants = 0;
    
    for (char ch : str) {
        if (isalpha(ch)) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }
    
    cout << "Vowels: " << vowels << ", Consonants: " << consonants << endl;
}

int main() {
    string str = "Hello World";
    countVowelsConsonants(str);
    return 0;
}
