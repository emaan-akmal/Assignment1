#include <iostream>

using namespace std;

int main()
{
	float M1;
	float M2;
	float distance;
	float force;
	const float K = 6.67E-8; 

	cout << "Enter mass of first body in grams: ";
		cin >> M1;
	cout << "Enter mass of second body in grams: ";
		cin >> M2;
	cout << "Enter distance between the bodies in centimetres: ";
		cin >> distance;

	force = K * ((M1 * M2) / (distance * distance));
		cout << "The force between the bodies is " << force << " in dynes.\n";
}