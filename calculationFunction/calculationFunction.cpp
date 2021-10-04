// calculationFunction.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//Function prototype//
void line();
void addNumbers();
void substractNumbers();
void multiplyNumbers();
void divideNumbers();


int main()
{
	addNumbers();
	substractNumbers();
	multiplyNumbers();
	divideNumbers();
}
void line() {
	cout << "\n******************\n";
}

void addNumbers() {
	float number1, number2, result;
	cout << "\nadding numbers";
	cout << "\nEnter number1" << endl;
	cin >> number1;
	cout << "\nEnter number2" << endl;
	cin >> number2;
	result = number1 + number2;
}
	
	void substractNumbers() {
		float number1, number2, result;
		cout << "\nsubstraction";
		line();
		cout << "\nEnter number1" << endl;
		cin >> number1;
		cout << "\nEnter number2" << endl;
		cin >> number2;
		result = number1 - number2;
		cout << "\nThe difference of the two given numbers is:" << result << endl << endl;
	}

	void multiplyNumbers() {
		float number1, number2, result;
		cout << "\nMultiplication";
		line();
		cout << "\nEnter number1: ";
		cin >> number1;
		cout << "\nEnter number2: ";
		cin >> number2;
		result = number1 * number2;
		cout << "\nThe product of the two given numbers is: " << result << endl << endl;
	}

	void divideNumbers() {
		float number1, number2, result;
		cout << "\nDivision";
		line();
		cout << "\nEnter number1: ";
		cin >> number1;
		cout << "\nEnter number2: ";
		cin >> number2;
		if (number2 != 0) {
			result = number1 / number2;
			cout << "\nThe difference of the two given numbers is: " << result << endl;
		}
		else {
			cout << "\nSorry the number2 is equal to zero, so division overflow, try a different number." << endl << endl;
		}


	}
