#include <iostream>

using namespace std;

int main()
{
	float principal, years, rate, interest, total;

	cout << "Enter the principal amount: ";
	cin >> principal;
	cout << "Enter the rate of interest: ";
	cin >> rate;
	cout << "Enter the compounding time in years: ";
	cin >> years;

	total = principal * pow(1 + (rate / 100), years);
	interest = total - principal;

	cout << "The interest after compounding the amount " << principal << " for " << years << " years at " << rate << "% is: " << interest << "\n";
	cout << "The total amount after compounding " << principal << " for " << years << " years at " << rate << "% is: " << total << "\n";
}	