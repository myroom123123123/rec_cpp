#include <iostream>
using namespace std;

int sum(int a, int b) {
	if (a == b) {
		return a;
	}
	else {
		return a + sum(a + 1, b);
	}
}

int main() {
	int a, b;
	cout << "Enter a: ";
	cin >> a;
	cout << "Enter b: ";
	cin >> b;
	cout << "The sum of all numbers in the range from " << a << " to " << b << " is " << sum(a, b) << endl;
	return 0;
}