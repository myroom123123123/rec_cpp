#include <iostream>
using namespace std;


int power(int base, int exp) {
	if (exp != 0)
		return (base * power(base, exp - 1));
	else
		return 1;
}

int main(){
		int base, exp;
	cout << "Enter base: ";
	cin >> base;
	cout << "Enter exponent: ";
	cin >> exp;
	cout << base << " raised to the power of " << exp << " is " << power(base, exp) << endl;
	return 0;
}