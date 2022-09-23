// https://docs.microsoft.com/en-us/troubleshoot/developer/visualstudio/cpp/libraries/stl-sqrt-pow-functions
// https://docs.microsoft.com/en-us/cpp/standard-library/iomanip-functions?view=msvc-170

#include <iostream> // To use cin/cout
#include <iomanip> // To access setw for output width
#include <cmath> // Access power function for calculations
using namespace std;
const double PI = 3.14159;
const double PISQR = pow(PI, 2);

int main()
{
	// r1 (small radius), r2 (cross sectional radius aka R)
	double r1, r2, volume, surfaceArea, piSqr;
	
	cout << "Circular Ring Dimensions Calculator" << endl 
		<< "By Forrest Moulin" << endl << endl;

	// User prompt
	cout << "Please enter the ring radius and the " <<
		"cross section radius (separated by spaces):" << endl << endl;

	// Read user input
	cin >> r1 >> r2;

	// Calculate dimensions
	// Volume = 2 * PI^2 * r1 * r2^2
	// Surface Area = 4 * PI^2 * r1 * r2
	volume = 2 * PISQR * r1 * pow(r2, 2);
	surfaceArea = 4 * PISQR * r2 * r1;

	// Echo the user input
	cout << fixed << setprecision(3);
	cout << endl << "You entered a radius of " << r1 << endl
		<< "and a cross section radius of " << r2 << "." << endl << endl;

	// Display calculated dimensions
	string volumeLine, surfaceAreaLine;
	volumeLine = "The volume is:";
	surfaceAreaLine = "The surface area is:";

	// Set output width so that left column is left aligned,
	// and right column is right aligned
	cout << left << setw(24) << volumeLine 
		<< right << setw(11) << volume << "." << endl;

	cout << left << setw(24) << surfaceAreaLine 
		<< right << setw(11) << surfaceArea << "." << endl;
}
/*
* CONSOLE OUTPUT
* Circular Ring Dimensions Calculator
* By Forrest Moulin
*
* Please enter the ring radius and the cross section radius (separated by spaces):
*
* 3 30
*
* You entered a radius of 3.000
* and a cross section radius of 30.000.
*
* The volume is:            53295.774.
* The surface area is:       3553.052.
*/
