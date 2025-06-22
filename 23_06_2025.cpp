#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string str) {
    int left = 0, right = str.length() - 1;
    while (left < right)
        if (tolower(str[left++]) != tolower(str[right--]))
            return false;
    return true;
}

int main() {
    string s = "Madam";
    if (isPalindrome(s))
        cout << "Palindrome" << endl;
    else
        cout << "Not a Palindrome" << endl;
    return 0;
}
