#include <iostream>

using namespace std;

int main() {
	int secondsElapsed, hours, minutes, seconds;

	cout << "Enter elapsed time of event in seconds: ";
	cin >> secondsElapsed;

	hours = secondsElapsed / 3600;
	minutes = (secondsElapsed % 3600) / 60;
	seconds = (secondsElapsed % 3600) % 60;

	cout << "The elapsed time of event in hours, minutes and seconds is ";
	cout << hours << ":" << minutes << ":" << seconds << "\n";
}