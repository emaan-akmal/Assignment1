#include <iostream>

using namespace std;

int main()
{
	float v, r, c, f, l;
	float tempEq, tempEq2, current;
	const float PI = 3.14159;

	cout << "Enter voltage in volts: ";
	cin >> v;
	cout << "Enter resistance: ";
	cin >> r;
	cout << "Enter capacitance: ";
	cin >> c;
	cout << "Enter inductance: ";
	cin >> l;
	cout << "Enter frequency: ";
	cin >> f;

	tempEq = (1 / (2 * PI * f * c));
	tempEq2 = 2 * PI * f * l;
	current = (v) / sqrt((r * r) + pow(tempEq2 - tempEq, 2));
	cout << "Current = " << current << "\n";
}