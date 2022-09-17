#include  <iostream>

using namespace std;

int main() {
	string a, b;
	cout << "Enter first value : ";
	cin >> a;
	cout << "Enter second value : ";
	cin >> b;

	swap(a, b);
	cout << "The first value is now = " << a << "\n";
	cout << "The second value is now = " << b << "\n";
}