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
	monthlyPayment =  (temp1 / temp2) * loan;
	amount = numOfPayments * monthlyPayment;
	
	cout << "\nLoan Amount: " << loan << "\n";
	cout << "Monthly Interest Rate: " << rate << "%\n";
	cout << "Number of Payments: " << numOfPayments << "\n";
	cout << fixed << setprecision(2);
	cout << "Monthly Payments: " << monthlyPayment << "\n";
	cout << "Amount Paid Back: " << amount << "\n";
	cout << "Interest Paid: " << amount - loan << "\n";
}