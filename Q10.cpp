#include <iostream>

using namespace std;

int main() {
	char lowerCase;
	int ascii;
	int upperCase;

	cout << "Enter an alphabet in lower case: ";
	cin >> lowerCase;
	ascii = (int)lowerCase;

	while (ascii > 122 || ascii < 97) {
		cout << "Invalid Input. Please Enter Again: ";
		cin >> lowerCase;
		ascii = (int)lowerCase;
	}

	upperCase = (int)lowerCase - 32;
	cout << "The equivalent upper case alphabet is: " << (char)upperCase << ".\n";
}