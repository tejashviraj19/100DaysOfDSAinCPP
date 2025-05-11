#include <iostream>
using namespace std;

int stringLength(string str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    string str = "Hello";
    cout << "Length of the string: " << stringLength(str) << endl;
    return 0;
}
