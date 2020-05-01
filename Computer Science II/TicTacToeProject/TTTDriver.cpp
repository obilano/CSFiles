/*********************************************************************
	Programmer:			Oberon Ilano
	Author(s):       	Dr. Janet Jenkins, Oberon Ilano	
	Project:			2 - Tic Tac Toe
	Description:		This program wil allow users to play 
						a Tic Tac Toe game. This program will also 
						allow user to keep, show, and save to file 
						the score of the game					
	Due Date:			November 1, 2018
	Course:				CS255 - Computer Science II
**********************************************************************/
#include "TTT1.h" 
#include "TicTacToe.h"

#include <fstream> //for outfile

int main ()
{
	TTT set;
	int row, column, // for passing parameters
		totalXLoss = 0, totalOLoss = 0,totalCatLoss = 0, //keep scores
        totalXWin = 0, totalOWin = 0, totalCatWin = 0;
	char choice, //for option selection, decided to use char to avoid crashing the program
		 game; // for passing parameter
	
	ofstream saveMe; //outfile variable
	saveMe.open("result.txt"); // save score to file
	if(!saveMe) // if file does not open then sent message to the user
	{
		cout << "ERROR: Cannot open file." << endl;
		main(); // if error back to main
	}
	saveMe << "Oberon Ilano" << endl << endl; // name on top of the 
	saveMe << "\tX " << "\t\t| O" << "\t\t| CAT " << endl; //outfile user O, user X, and Cat
	
	menu(); // menu option
	do
	{
		cin >> choice;
		switch (choice) //menu selection
		{
			case '1': //play the game option
				while(!set.CheckBoard()) //keep looping until the game is over
				{
					set.PrintBoard(); //set the TTT board
					set.MakeMove(game, row, column); //users move
					set.CheckBoard(); //check if any user win or game is draw			
				}
				break;
			case '2': // show the total wins and total losses
				cout << endl;
				cout << "\tX " << "\t| O" << "\t\t| CAT " << endl;
				cout << "\tWIN: " << totalXWin << "\t| WIN: " << totalOWin << "\t| WIN: " 
					 << totalCatWin << endl;
				cout << "\tLOSS: " << totalXLoss << "\t| LOSS: " << totalOLoss << "\t| LOSS: " 
					 << totalCatLoss << endl << endl;
				menu(); //option after showing the scores
				break;
			case '0':
				// save the total wins to file and exit the program
				cout << "\t Goodbye!" << endl;
				saveMe << "\t________________|_______________|_____________" << endl;
				saveMe << "\tTOTAL WIN:" << totalXWin << "\t|TOTAL WIN:" << totalOWin
			   		   << "\t| TOTAL WIN:" << totalCatWin << endl;  
				exit(1);
				break;
			default: 
				cout << "Invalid Choice, Please enter 1, 2, or 0: " << endl;
				break;		
		}
		if (set.CheckBoard() == 1) // if user X  (1) win
			{  
				totalXWin++; totalOLoss++; totalCatLoss++; //increment that total win or loss
				set.PrintBoard(); // display the last move before winning the game 
				cout << "\t User X won the game!" << endl << endl; //display that user X win
				saveMe << "\tWIN \t\t| LOSS \t\t| LOSS " << endl; //save win/loss to file 
				set.ClearBoard(); //reset the board and the user's turn after the game	
				menu();	// menu option after the game is over
			}
		if (set.CheckBoard() == -1) // if user O (-1) win
			{
				totalOWin++; totalXLoss++; totalCatLoss++; //increment that total win or loss
				set.PrintBoard(); // display the last move before winning the game 
				cout << "\t User O won the game!" << endl << endl; //display that user O win
				saveMe << "\tLOSS \t\t| WIN \t\t| LOSS " << endl; //save win/loss to file
				set.ClearBoard(); //reset the board and the user's turn after the game	
				menu(); // menu option after the game is over
			} 
		if (set.CheckBoard() != 0) // if draw
			{
				totalCatWin++; totalXLoss++; totalOLoss++; //increment that total win or loss
				set.PrintBoard(); // display the last move before winning the game 
				cout << "\t User Cat won the game!" << endl << endl; //display that Cat win
				saveMe << "\tLOSS \t\t| LOSS \t\t| WIN " << endl; // save win/loss to file
				set.ClearBoard(); //reset the board and the user's turn after the game	
				menu();	// menu option after the game is over			
			}			
	}while(choice != '0');	 // quit the progrram when the user choose 0
	saveMe.close(); // close the file
		
	return 0;	
}
