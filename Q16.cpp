#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	float angle;

	cout << "Enter angle in radians: ";
	cin >> angle;

	cout << fixed << setprecision(4);
	cout << "The sine of " << angle << " is " << sin(angle) << "\n";
	cout << "The cosine of " << angle << " is " << cos(angle) << "\n";
	cout << "The tangent of " << angle << " is " << sin(angle) << "\n";
}