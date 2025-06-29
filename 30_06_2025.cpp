#include <iostream>
#include <unordered_map>
using namespace std;

void countFrequency(string str) {
    unordered_map<char, int> freq;
    for (char c : str)
        freq[c]++;
    for (auto pair : freq)
        cout << pair.first << ": " << pair.second << endl;
}

int main() {
    string s = "programming";
    countFrequency(s);
    return 0;
}
