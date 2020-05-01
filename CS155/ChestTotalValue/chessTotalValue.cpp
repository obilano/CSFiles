/*
		Programmer:		Oberon Ilano
		Assignment:		4
		Description:	Program to compute the total value of chess pieces
		Date:			June 8, 2018
		Course:			CS155 - Computer Science I
*/
#include <iostream>
using namespace std;
int main()
{		//	Declare and Initailize variables
	int totalQueen=0, totalRook=0, totalKnight=0,
		totalBishop=0, totalPawn=0, totalValue=0;
	cout << "This program computes the value of chess pieces." << endl;
	
	//	Get inputs from user: queen=10, rook=5, knight=3, bishop=3, pawn=1
	cout << "Enter the quantity of the queen: ";
	cin >> totalQueen;
	cout << "Enter the quantity of the rook: ";
	cin >> totalRook;
	cout << "Enter the quantity of the knight: ";
	cin >> totalKnight;
	cout << "Enter the quantity of the bishop: ";
	cin >> totalBishop;
	cout << "Enter the quantity of the pawn: ";
	cin >> totalPawn;
	
	//	Perform calculations
	totalValue = (totalQueen*10) + (totalRook*5) + (totalKnight*3) 
				 + (totalBishop*3) + totalPawn;
	
	//	Output the total value of chess pieces
	cout << "The total value is: "<<totalValue;
	return 0;
}
