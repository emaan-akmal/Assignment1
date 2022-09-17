#include <iostream>

using namespace std;

int main()
{
	float mealCost = 44.50;
	float tax = 0.0675 * mealCost;
	float taxedCost = mealCost + tax;
	float tip = 0.15 * taxedCost;
	float totalBill = taxedCost + tip; 

	cout << "Meal Cost: $" << mealCost;
	cout << "\nTax: $" << tax;
	cout << "\nTip: $" << tip;
	cout << "\nTotal Bill: $" << totalBill << "\n";
}
