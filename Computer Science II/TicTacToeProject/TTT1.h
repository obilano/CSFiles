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
#include <iostream>

#define E 0
#define X 1
#define O -1
using namespace std;

class TTT{
	//***char baord[3][3] was switched from short board[3][3]***
	char board[3][3];// each item should always have the value 0,1, or -1
	int turn; // always start with X

public:
	TTT(); // initialize board

	void ClearBoard(); // reinitialize board

	short CheckBoard()const; // decide if game is over, return winner number
							 // X, O, Cat, or noone (game isn't over)
	//***char player was switched from short player sinced char board was changed
	bool MakeMove(char player, int r, int c);
							 // true if move is available
							 // false if move is unavailable

	void PrintBoard()const;  // print board in TTT format
					
};
