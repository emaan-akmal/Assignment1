#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int num1, num2, count = 0;
	srand(time(NULL));

	//range 0 to 5 digit so I did rand() multiple times to get max range 4(MAX_RAND) = 131068 and then mod by 100000 to get it back down to 0-99999.
	num1 = (rand() + rand() + rand() + rand()) % 100000;
	num2 = (rand() + rand() + rand() + rand()) % 100000;

	cout << setw(8) << num1 << "\n + " << num2;
	cout << "\n----------\n";
	system("pause");
	cout << setw(8) << num1 << "\n + " << num2;
	cout << "\n----------\n";
	cout << setw(8) << num1 + num2 << "\n";
}