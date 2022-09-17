#include <iostream>

using namespace std;

int main()
{
	int number;
	int tempNumber;
	int digit;

	cout << "Enter a five digit number: ";
	cin >> number;

	tempNumber = number % 100000;
	digit = tempNumber / 10000;
	cout << digit << "   ";

	tempNumber = number % 10000;
	digit = tempNumber / 1000;
	cout << digit << "   ";

	tempNumber = number % 1000;
	digit = tempNumber / 100;
	cout << digit << "   ";
	
	tempNumber = number % 100;
	digit = tempNumber / 10;
	cout << digit << "   ";
	
	tempNumber = number % 10;
	cout << tempNumber << "\n";
}