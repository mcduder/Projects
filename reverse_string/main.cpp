#include <iostream>
#include <string>

using namespace std;

int main() {
    string in;
    string reverse;
    int length;

    cout << "Enter a string to be reversed: ";
    cin >> in;

    length = in.length();

    for(int i = length - 1; i >= 0; i--) {
        reverse += in[i];
    }

    cout << reverse << endl;
}