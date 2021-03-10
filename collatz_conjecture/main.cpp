#include <iostream>

using namespace std;

int main () {
    int num = 0;
    int steps = 0;

    cout << "Please enter a number that is larger than 1" << endl;
    cin >> num;

    while (num != 1) {
        num = num % 2 == 0 ? num / 2 : (num * 3) + 1;
        steps++;
    }

    cout << "Took " << steps << " steps to reach 1" << endl;
}