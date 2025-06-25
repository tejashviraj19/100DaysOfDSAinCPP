#include <iostream>
#include <sstream>
using namespace std;

string largestWord(string str) {
    stringstream ss(str);
    string word, largest = "";

    while (ss >> word) {
        if (word.length() > largest.length())
            largest = word;
    }

    return largest;
}

int main() {
    string sentence = "Data Structures and Algorithms are fun";
    cout << "Largest word: " << largestWord(sentence) << endl;
    return 0;
}
