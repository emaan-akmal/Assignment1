#include <iostream>

using namespace std;

int main() {
	float nutsCal, driedFruitCal, calories, totalCal, pounds;
	int students;

	cout << "Enter the number of students: ";
	cin >> students;
	cout << "Number of calories required by each student; ";
	cin >> calories;
	cout << "Number of calories in a pound of nuts: ";
	cin >> nutsCal;

	totalCal = students * calories;
	driedFruitCal = nutsCal / 0.7;
	pounds = totalCal / (driedFruitCal + nutsCal);

	cout << "The amount of nuts and dried fruit needed each is: " << pounds << " pounds." << "\n";
}