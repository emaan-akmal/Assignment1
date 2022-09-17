#include <iostream>

using namespace std;

int main() 
{
	float capacity;
	float bagsNeeded;

	cout << "Enter bag capacity in pounds: ";
	cin >> capacity;
	bagsNeeded = (2205 / capacity);
	cout << "You need a total of " << ceil(bagsNeeded) << " bags\n";
}