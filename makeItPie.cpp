#include <iostream>
using namespace std;

void small_pi(double& num1, double& num2, double& num3);

int main() {

	double num1;
	double num2;
	double num3;

	cout << "Enter first number: ";
	cin >> num1;
	cout << "Enter second number: ";
	cin >> num2;
	cout << "Enter third number: ";
	cin >> num3;

	small_pi(num1, num2, num3);

	return 0;
}

void small_pi(double& num1, double& num2, double& num3) {

	double pie = 3.141592653589793238;

	if (num1 < num2 && num1 < num3) {
		num1 = pie;
	}
	else if (num2 < num1 && num2 < num3) {
		num2 = pie;
	}
	else {
		num3 = pie;
	}

	cout << "First number is: " << num1 << endl;
	cout << "Second number is: " << num2 << endl;
	cout << "Third number is: " << num3 << endl;
}
