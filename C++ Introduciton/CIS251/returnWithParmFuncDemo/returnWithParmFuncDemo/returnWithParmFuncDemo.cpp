#include <iostream>
#include <iomanip>

using namespace std;
//Global constants 
const double PI = 3.14159;

//Function prototypes
double getRadius();
double square(double);
double calcArea(double);

int main()
{
	
	double radius;
	double area;
	
	cout << fixed << showpoint << setprecision(2);
	cout << "This program calculates the area of a circle.\n";
	radius = getRadius();

	//Calculate the area
	area = calcArea(radius);

	//Display the calculated area
	cout << "\nThe area is " << area << endl << endl;

	system("Pause");
	return 0;

}

double getRadius()
{
	double rad;

	cout << "Enter the radius of a circle: ";
	cin >> rad;
	return rad;
}

double square(double number)
{
	return number * number;
}

double calcArea(double rad)
{
	
	return PI * square(rad);
}