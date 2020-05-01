/*
		Programmer:		Oberon Ilano
		Assignment:		15
		Description:	Program to compute body mass index.
		Date:			June 29, 2018
		Course:			CS155 - Computer Science I
*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main ()
{
int patient = 0;
double  weight = 0, height = 0, bMi = 0;

cout << "This program calculates the body mass index of patient(s) at a clinic."
		<< endl << endl;

	cout << "Enter number of patient(s): "; 
	cin >> patient;
	//Validating information if < 1 or > 10
	while (patient < 1 ||  patient > 10) 
		{
		cout << "Number of patient (must be between from 1 to 10): ";
		cin >> patient;
		}
	//Increment for patient numbers
	for (int numPatient = 1; numPatient <= patient; numPatient++) 
	{
			cout << "Enter the weight in pounds for patient " 
			<< numPatient << ": ";
			cin >> weight; 

			while (weight < 0.1) //Validating weight
			{
				cout << "Re-enter number of weight (must be greater than zero) "
				<< numPatient << ": ";
				cin >> weight;
			}
			
			cout << "Enter the height in inches for patient " 
			<< numPatient <<": ";
			cin >> height;
			
			while ( height < 0.1 )// Validating height
			{
				cout << "Re-enter number of height (must be greater than zero) "
					 << numPatient << ": ";
				cin >> height;	
					
			}
	
	// calculating BMI
	bMi = (weight * 703) / (pow (height, 2));
	cout << endl;
	// output BMI of patient(s)
	if (bMi < 18.5)
		cout << "Patient " << numPatient << " BMI is " << setprecision (1) 
			 << fixed << bMi << " and within Underweight Range." << endl << endl;
	else if (bMi >= 18.5 && bMi <= 25)
		cout << "Patient " << numPatient << " BMI is " << setprecision (1) 
			 << fixed << bMi << " and within Normal Range." << endl << endl;
	
	else
		cout << "Patient " << numPatient << " BMI is " << setprecision (1) 
			 << fixed << bMi << " and within Overweight Range." << endl << endl;
	
	
	}

	return 0;
}
