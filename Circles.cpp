#include <iostream>
using namespace std;

double Radius = 0;//Declares a double variable for the circle's radius

int main() {
  cout << "What is the radius of your circle? \n";
  cin >> Radius;//Inputs radius from user
  cout << "The area of your circle is " << 3.14159 * Radius * Radius << " and its circumference is " << 2 * 3.14159 * Radius << endl;//Prints calculations

  return 0;
} 
