#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	float payPerHour, hoursWorked, income, tax, clothes, supplies;
	float afterTax, amountLeft, savingBonds, parentBonds;

	cout << "Enter your pay rate per hour: ";
	cin >> payPerHour;
	cout << "Enter the number of hours you worked each week :";
	cin >> hoursWorked;

	income = 5 * (payPerHour * hoursWorked);
	tax = 0.14 * income;
	afterTax = income - tax;
	clothes = 0.10 * afterTax;
	supplies = 0.01 * afterTax;
	amountLeft = afterTax - (clothes + supplies);
	savingBonds = 0.25 * amountLeft;
	parentBonds = 0.5 * savingBonds;

	cout << "\nYour income before taxes was: $" << income << " and after taxes: $" << afterTax << " \n";
	cout << "You spent $" << clothes << " on clothes and accessories.\n";
	cout << "You spent $" << supplies << " on school supplies.\n";
	cout << "You spent $" << savingBonds << " on savings bonds.\n";
	cout << "Your parents spent $" << parentBonds << " on additional saving bonds.\n";
}