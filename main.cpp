#include <iostream>
#include<ctime>
using namespace std;

int gcd(int a, int b) {
	if (b == 0) {
		return a;
	}
	return gcd(b, a % b);
}

int main() {
	srand(time(0));
	int a = rand() % 100 + 1;
	int b = rand() % 100 + 1;
	cout << "The two numbers are " << a << " and " << b << endl;
	int result = gcd(a, b);
	cout << "The greatest common divisor of the two numbers is " << result << endl;
	return 0;
}