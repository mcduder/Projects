#include <iostream>

using namespace std;

int fibonacci(int);

int main() {
	int input = 0;

	cout << "Please enter a number to find the fibonacci seq" << endl;
	cin >> input;

	cout << "Fibonacci Sequence up to: " << input << endl;
	int output = fibonacci(input);

	cout << "Final: " << output << endl;
}

int fibonacci(int n) {
	if(n <= 1) {
		return n;
	} else {
		cout << n << endl;
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}