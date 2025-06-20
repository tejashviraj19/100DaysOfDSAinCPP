#include <iostream>
#include <string>
using namespace std;

string reverseString(string str) {
    int left = 0, right = str.length() - 1;
    while (left < right)
        swap(str[left++], str[right--]);
    return str;
}

int main() {
    string s = "HelloWorld";
    cout << "Reversed: " << reverseString(s) << endl;
    return 0;
}
