#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    int stringLength;

    cout << "Please enter a string" << endl;
    cin >> input;

    stringLength = input.length();

    for (int i = 0; i < stringLength; i++) {
        if (input[i] != input[stringLength - i - 1]) {
            cout << "Not a palindrome" << endl;
            return 0;
        }
    }

    cout << input << " is a palindrome!" << endl;
}