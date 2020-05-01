/*********************************************************************
	Programmer:			Oberon Ilano
	Author(s):       	Dr. Janet Jenkins, Oberon Ilano	
	Project:			1 - Teach a kid to ration
	Description:		This program wil allow users/students to read 
						intruction of different fraction operators,
						see different examples of fraction operators, 
						to be able to use fraction calculator, take 
						quiz of the operation of their choice and 
						to show quiz result.					
	Due Date:			October 4, 2018
	Course:				CS255 - Computer Science II
**********************************************************************/
//Modify this driver to contain your program
//Include file header comments, function comments, and inline comments

#include "Fraction.h" // include Fraction class header
#include "Fraction2.h" //new header for menus, instruction, example, calculator, quizzes, and result
//main driver
int main()
{
    Fraction number;
    int option, quiz = 0;
    //output banner
    cout << "   *******************************************" << endl
		 << "   *          Teach a Kid to Ration          *" << endl
	  	 << "   *******************************************";
	//main menu option
   	do
	{
		menu();
		cin >> option;				
		switch (option)
			{			
				case 0: cout << "Option: " << option << endl
						   	 << "         ******************************" << endl
							 << "         *          Goodbye!          *" << endl
							 << "         ******************************" << endl;
						exit (1); //quit program
						break;	
				case 1:	cout << "Option: " << option << endl
							 << "Instruction" << endl << endl;	
						subMenuInstruction(); //instructions
						break;
				case 2: cout << "Option: " << option << endl
							 << "Examples" << endl << endl;
						subMenuExamples(number); //examples
						break;
				case 3: cout << "Option: " << option << endl
							 << "Fraction Calculator" << endl << endl;
						subMenuFractionCalculator(number); //fraction calculator
				break;
	            case 4: cout << "Option: " << option << endl
						  	 << "Take Quiz" << endl << endl;
						//displaying submenus for quizzes
						int option;	
						do
							{
								subMenuQuiz();
								cin >> option;				
								switch (option)
									{			
									case 0: cout << "Option: " << option << endl
											 	 << "Main Menu" << endl << endl;
											int main(); //main menu
											break;	
									case 1:	cout << "Option: " << option << endl;
											cout << "Addition Quiz" << endl << endl;	
											additionQuiz(quiz); //quiz for addition
											break;
									case 2: cout << "Option: " << option << endl;
											cout << "Subtraction Quiz" << endl << endl;
											subtractionQuiz(quiz); //quiz for subtraction
											break;
									case 3: cout << "Option: " << option << endl;
											cout << "Multiplication Quiz" << endl << endl;
											multiplicationQuiz(quiz); //quiz for multiplication
											break;
						            case 4: cout << "Option: " << option << endl;
											cout << "Division Quiz" << endl << endl;
											divisionQuiz(quiz);  //quiz for division
											break;
						            case 5: cout << "Option: " << option << endl;
											cout << "Reducing Quiz" << endl << endl;
											reducingQuiz(quiz); //quiz for reducing
											break;
									default: cout << "Option: " << option<< endl;
											 cout << "Invalid Choice." 
											"Please enter valid number 1, 2, 3, 4, 5, or 0: ";
						            cout << endl;
									}	
							}while (option != 0);
						break;
	            case 5: cout << "Option: " << option << endl
							 << "Result" << endl << endl;
						printResult(quiz); // to display result
						break;
				default: cout << "Option: " << option<< endl
						 	  << "Invalid Choice." 
						"Please enter valid number 1, 2, 3, 4, 5, or 0 to quit: "; //default selection
	            cout << endl;
			}	
	}while (option != 0);
    return 0;
}
