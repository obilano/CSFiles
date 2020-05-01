/*
		Programmer:		Oberon Ilano
		Assignment:		18
		Description:	Program to compute Kinetic Energy.
		Date:			July 4, 2018
		Course:			CS155 - Computer Science I
*/
#include <iostream>
using namespace std;
double kineticEnergy(double mass, double velocity);//PROTOTYPE
int main()
{	
	cout << "This program compute Kinetic Energy." << endl;
	
	double mass = 0, velocity = 0, kEnergy = 0;
	//input from user, mass(double) and velocity (double)
	cout << "What is the mass in kilograms? ";
	cin >> mass;
	cout << "What is the velocity in meters per second? ";
	cin >> velocity;
	kEnergy = kineticEnergy(mass, velocity);
	cout << "The Kinetic Energy is " << kEnergy << " J."<< endl;
	return 0;
}
/*
Name:			kineticEnergy
Purpose:		This will compute the Kinetic Energy
 				given the object's mass and velocity
Incoming:		Object's mass in kilograms (double) 
				object's velocity in meters per second (double)
Outgoing: 		Object's Kinetic Energy (double)
				calculate Kinetic Energy = .5*mass*(velocity*velocity)
Return: 		Object's Kinetic Energy (double)
*/
double kineticEnergy(double mass, double velocity)
{
	double kineticE = 0;
	kineticE = 0.5 * mass * (velocity * velocity);
	return kineticE;
}
