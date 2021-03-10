/* Description: the program takes a cost and amount paid
 * and finds how much change needs to be given
 */

#include <iostream>

using namespace std;

int main() {
    // initializes constants for coins
    const int QUARTER = 25;
    const int DIME = 10;
    const int NICKEL = 5;
    const int PENNY = 1;

    // intiializes variables for user input
    double cost = 0;
    double amount = 0;

    // variable for the amount of change needed
    double change = 0;

    // variable to do the calculations of the amount of change needed
    int change_count = 0;

    // counters for the amount of specific coins needed
    int quarter_count = 0;
    int dime_count = 0;
    int nickel_count = 0;
    int penny_count = 0;

    // prompts the user to enter the cost of the item
    do {
        cout << "Please enter the cost of the item" << endl;
        cin >> cost;

        if (cin.fail() || cost <= 0) {
            cout << "Error: Invalid input. Please retry" << endl;
            cin.clear();
            cin.ignore(100, '\n');
            cost = 0;
        }
    } while (cost <= 0);

    // prompts the user to enter the amount they paid
    do {
        cout << "Please enter the amount paid" << endl;
        cin >> amount;

        if (cin.fail() || amount < cost) {
            cout << "Error: Invalid input. Please retry" << endl;
            cin.clear();
            cin.ignore(100, '\n');
            amount = 0;
        }
    } while(amount <= 0);

    // calculates the change
    change = amount - cost;

    // changes the amount of change into an int for easier calculation
    change_count = change * 100;

    // goes through each coin and finds if there is any change needed
    if (change_count >= QUARTER) {
        quarter_count = change_count / QUARTER;
        change_count = change_count % QUARTER;
    }

    if (change_count >= DIME) {
        dime_count = change_count / DIME;
        change_count = change_count % DIME;
    }

    if (change_count >= NICKEL) {
        nickel_count = change_count / NICKEL;
        change_count = change_count % NICKEL;
    }

    if (change_count >= PENNY) {
        penny_count = change_count / PENNY;
        change_count = change_count * PENNY;
    }

    cout << "Total change: " << change << endl;
    cout << "Total quarters: " << quarter_count << endl;
    cout << "Total dimes: " << dime_count << endl;
    cout << "Total nickels: " << nickel_count << endl;
    cout << "Total pennies: " << penny_count << endl;
}