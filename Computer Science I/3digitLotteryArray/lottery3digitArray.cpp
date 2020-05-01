/*9
		Programmer:		Oberon Ilano
		Assignment:		23
		Description:	This program generate numbers for lottery
		Date:			July 16, 2018
		Course:			CS155 - Computer Science I
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <fstream>
void getGen(int &numGen); //FUNCTION PROTOTYPES
using namespace std;
int main()
{
	ofstream outfile;//output to file (triangle.txt)
	outfile.open("lottery.txt");
	if (outfile.fail())	
		{
		cout << "ERROR: Could not open the output file." << endl;
		exit(1);
		}
		
	int num = 0 , numGen = 0;
	srand(time(0));
	getGen(numGen);
	for (int i = 1; i <= numGen; i++)
	{
	num = 1 + rand()%999;
	cout << setw(3) << setfill('0') << setprecision(3) << num << endl;
	outfile << setw(3) << setfill('0') << setprecision(3) << num << endl;
	}
	outfile.close();	
	
	return 0;
}
/*******************************************************
#Function Definition#
Name:			getGen
Purpose:		This will validate user's input between 
				1 to 366
Incoming:		Number of lottery to generate (int)			
Outgoing: 		numGen (int)
Return: 		numGen (int)
********************************************************/

void getGen(int &numGen)
{
do

	{	
		cout << "Enter number of lottery you want to generate: ";
		cin >> numGen;
	}while (numGen < 1 || numGen > 366 ); //VALIDATING INPUT
}

