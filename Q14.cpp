#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	float loan, rate, temp1, temp2, monthlyPayment, amount;
	int numOfPayments;

	cout << "Enter the loan amount: ";
	cin >> loan;
	cout << "Enter the monthly interest rate: ";
	cin >> rate;
	cout << "Enter the number of payments: ";
	cin >> numOfPayments;

	temp1 = (rate / 100) * (pow((1 + (rate / 100)), numOfPayments));
	temp2 = (pow((1 + (rate / 100)), numOfPayments) - 1);
	monthlyPayment = (temp1 / temp2) * loan;
	amount = numOfPayments * monthlyPayment;

	cout << "\nLoan Amount: " << fixed << setprecision(2) << setw(10) << "$" << setw(9) << loan << "\n";
	cout << "Monthly Interest Rate: " << setprecision(0) << setw(8) << rate << "%\n";
	cout << "Number of Payments: " << setw(12) << numOfPayments << "\n";
	cout << fixed << setprecision(2);
	cout << "Monthly Payments: " << setw(5) << "$" << setw(9) << monthlyPayment << "\n";
	cout << "Amount Paid Back: " << setw(5) << "$" << setw(9) << amount << "\n";
	cout << "Interest Paid: " << setw(8) << "$" << setw(9) << amount - loan << "\n";
}