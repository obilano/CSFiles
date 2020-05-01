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

#include "TTT1.h" //include TTT header for function declarations

//***************************************************************
//class definition/ implementation
//***************************************************************

//*********************************************************************
//Constructors| iniatilized board wiht number 1 - 9, and user turn to 1
//*********************************************************************
TTT::TTT(): board{'1','2','3','4','5','6','7','8','9'}, turn(1){}

/*************************************************
#Function Definition#
Name:			ClearBoard
Purpose:		Reintialize the board for new game,
				output matrix of 2D array 3x3 (char)
				and reset users turn
Incoming:		None
Outgoing:		Tic Tac Toe Board (char)
Return:			None
***************************************************/
void TTT::ClearBoard() 
{	
	// reinitialize board 
	char newBoard[3][3] = {'1','2','3','4','5','6','7','8','9'};
	for (int i = 0; i < 3; i++)
		for(int j = 0; j < 3; j++)
			board[i][j] = newBoard[i][j];
	//reset turn
	turn = 1;
}

/*********************************************************
#Function Definition#
Name:			CheckBoard
Purpose:		To validate if any user win the game,
				the board is full, or if the game is draw. 
Incoming:		none
Outgoing:		none
Return:			return winner number
**********************************************************/
short TTT::CheckBoard()const
{
    // decide if game is over, return winner number; X, O, Cat, or noone (game isn't over)
	// checking for horizontal win for user X (1
	for (int i = 0; i < 3; i++)
	if (((board[i][0] == 'X' && board[i][1] == 'X' && board[i][2] == 'X'))
	// checking for vertical win for user X (1)
	|| ((board[0][i] == 'X' && board[1][i] == 'X' && board[2][i] == 'X'))
	//checking for diagonal win for user X (1)
	|| ((board[0][0] == 'X' && board[1][1]== 'X' && board[2][2] == 'X') ||
		(board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == 'X')))
		return 1;
	
	// checking for horizontal win for user O (-1)
	for (int i = 0; i < 3; i++)
	if (((board[i][0] == 'O' && board[i][1] == 'O' && board[i][2] == 'O'))
	// checking for vertical win for user O (-1)
	|| ((board[0][i] == 'O' && board[1][i] == 'O' && board[2][i] == 'O'))
	//checking for diagonal win for user O (-1)
	|| ((board[0][0] == 'O' && board[1][1]== 'O' && board[2][2] == 'O') ||
		(board[0][2] == 'O' && board[1][1] == 'O' && board[2][0] == 'O')))
		return -1;
	
	//if grid is not full
	for (int i = 0; i < 3; i++) 
		for (int j = 0; j < 3; j++)
   			if (board[i][j] != 'X' && board[i][j] != 'O')  				   	
    	return 0; //if not 0, 1, -1 then it is draw/cat win
}

/***************************************************
#Function Definition#
Name:			MakeMove
Purpose:		To validate if move is available,
				board is all filled, and toggle 
				player bewtween X and O
Incoming:		User's choice 1-9 (char)
Outgoing:		User's move choice X or O (char)
Return:			move (true)
*****************************************************/
bool TTT::MakeMove(char player, int r, int c)
{	
	bool move = false;
	char choice;
	// user switch turn
	if (turn == 1)
		cout << "User 1 (X) move: ";	
	if (turn == -1)
		cout << "User 2 (O) move: ";
		cin >> choice;
	//validate which position/move does user wants to take
	switch(choice)
		{
			case '1': //if user wants to take 1 for the move
				r = 0; c = 0;
				break;
			case '2': //if user wants to take 2 for the move
				r = 0; c = 1;
				break;
			case '3': //if user wants to take 3 for the move
				r = 0; c = 2;
				break;
			case '4': //if user wants to take 4 for the move
				r = 1; c = 0;
				break;
			case '5': //if user wants to take 5 for the move
				r = 1; c = 1;
				break;
			case '6': //if user wants to take 6 for the move
				r = 1; c = 2;
				break;
			case '7': //if user wants to take 7 for the move
				r = 2; c = 0;
				break;
			case '8': //if user wants to take 8 for the move
				r = 2; c = 1;
				break;
			case '9': //if user wants to take 9 for the move
				r = 2; c = 2;
				break;
			default:
				cout << "Please select a valid choice. " << endl;
				return move;
		}		
	//validate if choice is not already filled	
	if (turn == 1 && board[r][c] != 'X' && board[r][c] != 'O')
		{
			board[r][c] = 'X'; //fill the number of choice with X
			turn = -1; //User O (-1) takes the turn
		}
	else if (turn == -1 && board[r][c] != 'X' && board[r][c] != 'O') 
		{
			board[r][c] = 'O'; //fill the number of choice with O
			turn = 1; //User X (1) takes the turn
		}
	else
		{ // if move is already filled then output comment
			cout << "Choice already filled. Please try another move! " << endl;
			MakeMove(player, r, c); // ask the user again for valid choice
		}
	move = true; 
	return move; 
}	

/******************************************************
#Function Definition#
Name:			PrintBoard
Purpose:		Set up board for tic tac toe game, and
				output matrix of 2D array 3x3 (char)
Incoming:		None
Outgoing:		Tic Tac Toe Board (char)
Return:			None
*****************************************************/					 
void TTT::PrintBoard()const				
{
	// print board in TTT format	
	cout << "\t TIC TAC TOE " << endl
		 << "\t ___ ___ ___ " << endl
	     << "\t    |   |   " << endl // display first row
		 << "\t  " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << endl
		 << "\t ___|___|___ " << endl
	   	 << "\t    |   |   " << endl // display second row
		 << "\t  " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << endl
		 << "\t ___|___|___ " << endl
		 << "\t    |   |   " << endl // display third row
		 << "\t  " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << endl
		 << "\t ___|___|___ " << endl << endl;
	//display users
	cout << "\tUser X (1)" << endl 
		 << "\tUser O (-1)" << endl << endl;	
}
