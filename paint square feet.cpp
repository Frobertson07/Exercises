#include <iostream>
#include <string>
using namespace std;
int main() {
    //consts are variables whose value cannot be modified later
    const int COVERAGE = 350; // paint covers 350 sq ft per gallon
    // declare integers length, width, and height
    int length = 0;
    int width = 0;
    int height = 0;
    // declare double totalSqFt;
    double totalSqFt = 0;
    // declare double paintNeeded;
    double paintNeeded = 0;
    // prompt for and read in the length of the room
    cout << "What is the length of the room? \n";
    cin >> length;
    // prompt for and read in the width of the room
    cout << "What is the width of the room? \n";
    cin >> width;
    // prompt for and read in the height of the room
    cout << "What is the height of the room? \n";
    cin >> height;
    // Compute the total square feet to be painted - think about   the dimensions of each wall assuming standard four wall room.
    totalSqFt = ((height * width) * 2) + ((height * length) * 2);
    // Compute the amount of paint needed
    paintNeeded = totalSqFt / COVERAGE;
    // Print the length, width, and height of the room, the total square feet and number of gallons of paint required
    cout << "Your room is " << length << " feet long, " << width << " feet wide and " << height << " feet high. The total square feet of your room is " << totalSqFt << " and it will require " << paintNeeded << " gallons of paint \n";
    return 0;
}
