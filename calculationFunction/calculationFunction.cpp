// calculationFunction.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//Function prototype//
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

void addNumbers() {
	float number1, number2, result;
	cout << "\nEnter number1" << endl;
	cin >> number1;
	cout << "\nEnter number2" << endl;
	cin >> number2;
	result = number1 + number2;
}
	
	void substractNumbers() {
		cout << "\nEnter number1" << endl;
		cin >> number1;
		cout << "\nEnter number2" << endl;
		cin >> number2;
		result = number1 - number2;
	}




