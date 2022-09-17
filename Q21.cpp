#include <iostream>

using namespace std;

int main() {
	float speedA, speedB;
	float distanceA, distanceB, shortestDistance;
	float hours, minutes, a, b;


	cout << "Enter the average speed of car A in miles per hour: ";
	cin >> speedA;
	cout << "Enter the average speed of car B in miles per hour: ";
	cin >> speedB;
	cout << "Enter the elapsed time in hours and minutes (hours <space> minutes): "; 
	cin >> hours >> minutes;
	
	distanceA = speedA * (hours + minutes / 60);
	distanceB = speedB * (hours + minutes / 60);
	a = pow(distanceA, 2);
	b = pow(distanceB, 2);
	shortestDistance = sqrt(a + b);

	cout << "\nThe shortest distance between the cars is " << shortestDistance << " miles\n";
}