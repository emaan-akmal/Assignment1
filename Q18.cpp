//assuming that ceiling does not need to be painted, if it does, uncomment the commented parts in main.
#include <iostream>

using namespace std;

int main() {
	float doorLength, doorWidth, lengthW1, widthW1, lengthW2, widthW2, shelfLength, shelfWidth;
	float roomLength, roomWidth, roomHeight;
	float window1Area, window2Area, doorArea, shelfArea, wallsA, wallsB,/* ceiling,*/ totalArea, paintedArea, gallonsNeeded;

	cout << "Enter the length and width of the first window in feet: ";
	cin >> lengthW1 >> widthW1;
	window1Area = lengthW1 * widthW1;
	
	cout << "Enter the length and width of the second window in feet: ";
	cin >> lengthW2 >> widthW2;
	window2Area = lengthW2 * widthW2;

	cout << "Enter the length and width of the door in feet: ";
	cin >> doorLength >> doorWidth;
	doorArea = doorLength * doorWidth;

	cout << "Enter the length and width of the bookshelf in feet: ";
	cin >> shelfLength >> shelfWidth;
	shelfArea = shelfLength * shelfWidth;

	cout << "Enter the length, width and height of the room in feet: ";
	cin >> roomLength >> roomWidth >> roomHeight;
	wallsA = 2 * roomHeight * roomWidth;
	wallsB = 2 * roomHeight * roomLength;
	/*ceiling = roomLength * roomWidth;*/
	totalArea = wallsA + wallsB/* + ceiling*/;

	paintedArea = totalArea - (window1Area + window2Area + doorArea + shelfArea);
	gallonsNeeded = paintedArea / 120;
	cout << "\nThe amount of paint needed for painting the room is:  " << gallonsNeeded << " gallons.\n";
}