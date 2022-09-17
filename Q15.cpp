#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	float dollars, yen, euros;
	const float YEN_PER_DOLLAR = 142.86;
	const float EUROS_PER_DOLLAR = 1.00;

	cout << "Enter amount of US dollars to be converted: ";
	cin >> dollars;

	yen = YEN_PER_DOLLAR * dollars;
	euros = EUROS_PER_DOLLAR * dollars;

	cout << fixed << showpoint;
	cout << setprecision(2) << yen << "\n";
	cout << setprecision(2) << euros;
}