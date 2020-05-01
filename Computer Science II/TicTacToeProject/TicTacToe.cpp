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

/*************************************************
#Function Definition#
Name:			Main menu
Purpose:		Use to select option for main 
				menu from keyboard
Incoming:		None
Outgoing:		menu option (char of numbers)
Return:			None
***************************************************/
void menu()
{
		cout << endl
		 << "\t TIC TAC TOE MENU " << endl << endl
		 << "\t 1 New Game " << endl
		 << "\t 2 See Score " << endl
		 << "\t 0 Save total scores and quit " << endl
		 << "\t Enter option 1, 2, or 0: \n";	     	
}
