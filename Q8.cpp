#include <iostream> 

using namespace std;

int main()
{
	int purchasers = 0.14 * 12467;
	int preferCitrus = ceil(0.64 * purchasers);

	cout << "Approximate number of customers in the survey who purchase one or more energy drinks per week: " << purchasers;
	cout << "\nApproximate number of customers in the survey who prefer citrus flavored energy drinks: " << preferCitrus << "\n";
}