/* Description: this program will find the value of PI to the
 * digit inputted. The calculation is done using the Chudnovsky
 * algorithm
 */
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

// used to get the factorial of a given number
int get_factorial(int x) {
    int factorial = 1;
    for(int i = 1; i <= x; i++) {
        factorial *= i;
    }

    return factorial;
}

int main() {
    int digit = 0;

    const double circ = 125.66;
    const double diameter = 40;

    double numerator = 0;
    double denomenator = 0;
    double pi = 0;

    // long double pi = 10000 * sin(180/10000);

    do {
        cout << "How many digits of PI would you like to find:" << endl;
        cin >> digit;

        if(cin.fail() || digit <= 0) {
            cout << "Error invalid input. Please retry" << endl;
            cin.clear();
            cin.ignore(100, '\n');
            digit = 0;
        }
    } while (digit <= 0);

    for(int i = 0; i <= digit; i++) {
        numerator = pow(-1, i) * get_factorial(6*i) * (13591409+545140134*i);
        denomenator = get_factorial(3*i)*pow(get_factorial(i), 3)*pow(640320, 3*i);
        pi += numerator/denomenator;
    }

    pi = pi * 12 / pow(640320, 1.5);
    pi = 1/pi;

    cout << setprecision(digit+1) << pi << endl;
}