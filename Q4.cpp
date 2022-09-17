#include <iostream>

using namespace std;

int main() {
	string name, age, city, college, profession, animal, petName;

	cout << "Enter your name: ";
	cin >> name;
	cout << "Enter your age: ";
	cin >> age;
	cout << "Enter your city's name: ";
	cin >> city;
	cout << "Enter your college's name: ";
	cin >> college;
	cout << "Enter your profession: ";
	cin >> profession;
	cout << "Enter your pet's name and animal type: ";
	cin >> petName >> animal;

	cout << "There once was a person named " << name << " who lived in " << city << ". At the age of " << age << ", " << name << " went";
	cout << " to college at " << college << ". " << name << " graduated from " << college << " and went to work as a ";
	cout << profession << ". Then, " << name << " adopted a(n) " << animal << " named " << petName << ". They both lived";
	cout << " happily ever after!\n";
}