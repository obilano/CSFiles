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

#include "Fraction2.h" //new header for menus, instruction, example, calculator, quizzes, and result
#include "Fraction.h" // include Fraction class header

/*************************************************
#Function Definition#
Name:			Main menu
Purpose:		Use to select option for main 
				menu from keyboard
Incoming:		None
Outgoing:		menu option (int)
Return:			None
***************************************************/
void menu()
{
	cout << endl;
	cout << "   *******************************************" << endl
		 << "   *           Main Menu Selection           *" << endl
	  	 << "   *******************************************" << endl
		 << "   *            1. Instructions              *" << endl
		 << "   *       2. Examples of Operations         *" << endl
		 << "   *         3. Fraction Calculator          *" << endl
		 << "   *             4. Take a Quiz              *" << endl
		 << "   *        5. See Recent Quiz Result        *" << endl
		 << "   *             0. Quit Program             *" << endl
		 << "   *******************************************" << endl
		 << "   Enter Option (1, 2, 3, 4, 5, or 0 to Quit): ";
}

/*************************************************
#Function Definition#
Name:			subMenuInstructions
Purpose:		Use to select option for
				intruction menu  from keyboard
Incoming:		None
Outgoing:		menu option (int), instructions
				of different operations
Return:			None
***************************************************/
void subMenuInstruction()
{
	int option;
	cout << endl
		 << "   *******************************************" << endl
		 << "   *            Instruction Menu             *" << endl
		 << "   *******************************************" << endl
		 << "   *            1. Addition Guide            *" << endl
		 << "   *          2. Subtraction Guide           *" << endl
		 << "   *         3. Multiplication Guide         *" << endl
		 << "   *           4. Division Guide             *" << endl
		 << "   *            5. Reducing Guide            *" << endl
		 << "   *              0. Main Menu               *" << endl
		 << "   *******************************************" << endl
		 << "      Enter Option (1, 2, 3, 4, 5, or 0 ): ";

	do
	{
	cin >> option;				
		switch (option)
			{			
			case 0: cout << "Option: " << option << endl
						 << "Main Menu" << endl << endl;
						 int main(); //return to main menu
					break;	
			case 1:	cout << "Option: " << option << endl
						 << "Addition Guide" << endl << endl	
						 << "*****************************************************"<<endl
						 << "A/B" "\t" "A = Numerator 1," "\t" "B = Denominator 1 "<<endl
						 << "C/D" "\t" "C = Numerator 2," "\t" "D = Denominator 2 "<<endl
						 << "*****************************************************"<<endl
						 << "*            Instruction for Subtraction            *"<< endl
						 << "*****************************************************"<<endl
						 << "1. If both denominators are similar then proceed" << endl
					 	 << "   the addition operation by adding both fractions. " << endl
						 << "   Add numerator 1 to numerator 2 and add " <<endl
						 << "   denominator 1 to denominator 2. " << endl << endl
						 << "2. If both denominators are not similar then a " << endl
						 << "   common denominator is needed." << endl << endl
						 << "2a. Common denominaotor can be achieved by multiplying "<<endl
						 << "    both denominators of the fractions" << endl << endl
						 << "2b. After finding the Common denominator, multiply " << endl
						 << "    the numerator 1 to denminator 2 and multiply " << endl
						 << "    numerator 2 to denominator 1." << endl << endl
						 << "2c. After 2a and 2b, both fraction 1 and 2 " << endl
						 << "    can now be added together. " << endl << endl
						 << "Note: The denominators of the fractions have to be " << endl
						 << "      the same number before you can add. " << endl <<endl;
					cout << "Press 0-Main Menu, 1-Addition, 2-Subtraction, " 
			 			 << "3-Multiplication, 4-Division, 5-Reducing "<< endl <<endl;
					break;
			case 2: cout << "Option: " << option << endl
						 << "Subtraction Guide" << endl << endl
						 << "*****************************************************"<<endl
						 << "A/B" "\t" "A = Numerator 1," "\t" "B = Denominator 1 "<<endl
						 << "C/D" "\t" "C = Numerator 2," "\t" "D = Denominator 2 "<<endl
						 << "*****************************************************"<<endl
						 << "*            Instruction for Subtraction            *"<< endl
						 << "*****************************************************"<<endl
						 << "1. If both denominators are similar then proceed" << endl
				 		 << "   the subtraction operation by subtracting both" << endl
						 << "   fractions. Subtract numerator 1 to numerator 2 and " <<endl
						 << "   subtract denominator 1 to denominator 2. " << endl << endl
						 << "2. If both denominators are not similar then a " << endl
						 << "   common denominator is needed." << endl << endl
						 << "2a. Common denominaotor can be achieved by multiplying "<<endl
					  	 << "    both denominators of the fractions" << endl << endl
						 << "2b. After finding the Common denominator, multiply " << endl
						 << "    the numerator 1 to denminator 2 and multiply " << endl
					     << "    numerator 2 to denominator 1." << endl << endl
						 << "2c. After 2a and 2b, both fraction 1 and 2 " << endl
						 << "    can now be subtracted together. " << endl << endl
						 << "Note: The denominators of the fractions have to be " << endl
						 << "      the same number before you can subtract. " << endl << endl;
				    cout << "Press 0-Main Menu, 1-Addition, 2-Subtraction, " 
			 			 << "3-Multiplication, 4-Division, 5-Reducing "<< endl;
					break;
			case 3: cout << "Option: " << option << endl
						 << "Multiplication Guide " << endl << endl
						 << "*****************************************************"<<endl
						 << "A/B" "\t" "A = Numerator 1," "\t" "B = Denominator 1 "<<endl
						 << "C/D" "\t" "C = Numerator 2," "\t" "D = Denominator 2 "<<endl
						 << "*****************************************************"<<endl
						 << "*            Instruction for Subtraction            *"<< endl
						 << "*****************************************************"<<endl
						 << "1. Multiply both fractions by multiplying numerator 1 " << endl
						 << "   to numerator 2 and multiply denominator 1 to " << endl
						 << "   denominator 2. " << endl << endl;
					cout << "Press 0-Main Menu, 1-Addition, 2-Subtraction, " 
			 			 << "3-Multiplication, 4-Division, 5-Reducing "<< endl;
					break;
            case 4: cout << "Option: " << option << endl
						 << "Division Guide " << endl << endl
						 << "*****************************************************"<<endl
						 << "A/B" "\t" "A = Numerator 1," "\t" "B = Denominator 1 "<<endl
						 << "C/D" "\t" "C = Numerator 2," "\t" "D = Denominator 2 "<<endl
						 << "*****************************************************"<<endl
						 << "*              Instruction for Division             *"<< endl
						 << "*****************************************************"<<endl
						 << "1. Divide both fractions by multiplying the first " << endl
						 << "   fraction to the reciprocal of the second fraction. " << endl
						 << "   This is done by flipping the second fraction over. " << endl
						 << endl
						 << "2. Once the second fraction is flipped, then multiply " << endl
						 << "   both fractions by multiplying numerator 1 to  " << endl
						 << "   numerator 2 and multiply denominator 1 to  " << endl
						 << "   denominator 2." << endl << endl;
					cout << "Press 0-Main Menu, 1-Addition, 2-Subtraction, " 
			 			 << "3-Multiplication, 4-Division, 5-Reducing "<< endl;
					break;
            case 5: cout << "Option: " << option << endl
						 << "Reducing Guide " << endl << endl
						 << "*****************************************************"<<endl
						 << "      A/B     A = Numerator     B = Denominator      "<<endl
						 << "*****************************************************"<<endl
						 << "*              Instruction for Reducing             *"<< endl
						 << "*****************************************************"<<endl
						 << "1. Reducing factor is first done by finding the " << endl
						 << "   Greatest Common Factor (GCF). " << endl
						 << "   Greatest Common Factor is the biggest number that" <<endl
						 << "   can be divided by the numerator and denominator " << endl
						 << "   evenly without having decimals. " << endl << endl
						 << "2. Once GCF is found, then divide both numerator and " << endl
						 << "   denominator by GCF and reduce or simplify. " << endl <<endl;
					cout << "Press 0-Main Menu, 1-Addition, 2-Subtraction, " 
			 			 << "3-Multiplication, 4-Division, 5-Reducing "<< endl;
					break;
			default: cout << "Option: " << option<< endl;
					 cout << "Invalid Choice." 
					"Please enter valid number 1, 2, 3, 4, 5, or 0: "; // looping for valid option
            cout << endl;
			}	
	}while (option != 0);
}

/***************************************************
#Function Definition#
Name:			subMenuExamples
Purpose:		Use to select option for example
				menu from keyboard
Incoming:		None
Outgoing:		menu option (int) and Examples of 
				different operations fractions (int)
Return:			None
*****************************************************/
void subMenuExamples(Fraction&)
{
	int choice;
	// random number set
	srand(time(0));	
	int randNum = 2 * ( rand() % 10 ) + 1; //set random numbers for numerator
	int randDen = 2 * ( rand() % 4 ) + 1; //set random numbers for denominator 
	Fraction f1(((rand() % 19) + 1), ((rand() % 7) + 1)); //set random numbers for frations
	Fraction f2(((rand() % 19) + 1), ((rand() % 7) + 1));
	Fraction f3(((rand() % 19) + 1), ((rand() % 7) + 1));
	Fraction f4(((rand() % 19) + 1), ((rand() % 7) + 1));
	Fraction f5;
	Fraction result;
	//displaying submenu for examples
	cout << endl
		 << "   *******************************************" << endl
		 << "   *         Operation Examples Menu         *" << endl
		 << "   *******************************************" << endl
		 << "   *           1. Addition Example           *" << endl
		 << "   *          2. Subtraction Example         *" << endl
		 << "   *        3. Multiplication Example        *" << endl
		 << "   *          4. Division Example            *" << endl
		 << "   *           5. Reducing Example           *" << endl
		 << "   *              0. Main Menu               *" << endl
		 << "   *******************************************" << endl
		 << "      Enter Option (1, 2, 3, 4, 5, or 0 ): ";

	do
		{		
			cin >> choice;				
			switch (choice)
				{		
					case 0: cout << "Choice: " << choice << endl
							     << "Main Menu" << endl << endl;
							int main(); // return main menu
							break;	
					case 1:	cout << "Choice: " << choice << endl // addition example
								 << "Addition Example" << endl << endl;	
							result = f1 + f2;
							cout << f1 << " + " << f2 << " = " << result << endl << endl;
							cout << "Press 0-Main Menu, 1-Addition, 2-Subtraction, " 
			 			 		 << "3-Multiplication, 4-Division, 5-Reducing "<< endl;
							break;
					case 2: cout << "Choice: " << choice << endl //subtraction example
								 << "Subtraction Example" << endl << endl;
							result = f3 - f4;
							cout << f3 << " - " << f4 << " = " << result << endl <<endl;
							cout << "Press 0-Main Menu, 1-Addition, 2-Subtraction, " 
			 			 		 << "3-Multiplication, 4-Division, 5-Reducing "<< endl;
							break;
					case 3: cout << "Choice: " << choice << endl //multiplication example
								 << "Multiplication Example" << endl << endl;
							result = f2 * f3;
							cout << f2 << " * " << f3 << " = " << result << endl << endl;
							cout << "Press 0-Main Menu, 1-Addition, 2-Subtraction, " 
			 			 		 << "3-Multiplication, 4-Division, 5-Reducing "<< endl;
							break;
				    case 4: cout << "Choice: " << choice << endl //division example
								 << "Division Example" << endl << endl;
							result = f1 / f4;
							cout << f1 << " / " << f4 << " = " << result << endl << endl;
							cout << "Press 0-Main Menu, 1-Addition, 2-Subtraction, " 
			 			 		 << "3-Multiplication, 4-Division, 5-Reducing "<< endl;
							break;
				    case 5: cout << "Choice: " << choice << endl; // reducing example
							cout << "Reducing Example" << endl << endl;	
							f5.setNum(randNum); //set num with random number
							f5.setDen(randDen);	//set den with random number				
    						cout << f5.getNum() << "/" << f5.getDen() << " = ";
							f5.reduce(); // reduce fraction 
							cout << f5 << endl << endl; 
							cout << "Press 0-Main Menu, 1-Addition, 2-Subtraction, " 
			 			 		 << "3-Multiplication, 4-Division, 5-Reducing "<< endl;
							break;
					default: cout << "Choice: " << choice << endl;
							 cout << "Invalid Choice." 
							"Please enter valid number 1, 2, 3, 4, 5, or 0: ";
				       		 cout << endl;
						}	
				}while (choice != 0);	
}

/***************************************************
#Function Definition#
Name:			subMenuFracCal
Purpose:		Use to select option for fraction
				calculator menu from keyboard, and
				input answer (fraction, int)
Incoming:		answer for fraction calculator, 
				numerator and denominator (fraction, int)
Outgoing:		menu option (int) and answers/feeedback 
				for different operations fractions 
				(num and dom int)
Return:			None
*****************************************************/
void subMenuFractionCalculator(Fraction&)
{
	int option;
	char trash; // set varible for character ex: /
	srand(time(0));	
	// set numerator and denominator with random numbers
	int numer = (rand() % 2 == 0) + 2 * (rand() % 20) + 2, denom =  (rand() % 2 == 0) + 2 * (rand() % 8) + 2; 
	Fraction frac1, frac2, result, a;
	//displaying submenu for Fraction Calculator
	cout << endl
		 << "   *******************************************" << endl
		 << "   *        Fraction Calculator Menu         *" << endl
		 << "   *******************************************" << endl
		 << "   *               1. Addition               *" << endl
		 << "   *              2. Subtraction             *" << endl
		 << "   *            3. Multiplication            *" << endl
		 << "   *               4. Division               *" << endl
		 << "   *               5. Reducing               *" << endl
		 << "   *              0. Main Menu               *" << endl
		 << "   *******************************************" << endl
		 << "      Enter Option (1, 2, 3, 4, 5, or 0 ): ";

	do
		{
			cin >> option;				
			switch (option)
				{			
				case 0: cout << "Option: " << option << endl
							 << "Main Menu" << endl << endl;
						int main(); //return to main menu
						break;	
				case 1:	cout << "Option: " << option << endl;
						cout << "Addition" << endl << endl;	 // addtion calculator question
						cout << "Enter first fraction (integer numerator and denominator only, ex: 5/7): ";
						cin >> frac1;
						cout << "Enter second fraction (integer numerator and denominator only, ex: 5/7): ";
						cin >> frac2;
						result = frac1 + frac2;
						cout << frac1 << " + " << frac2 << " = " << result << endl; //feedback
						cout << "Press 0-Main Menu, 1-Addition, 2-Subtraction, " 
			 			 		 << "3-Multiplication, 4-Division, 5-Reducing "<< endl;
						break;
				case 2: cout << "Option: " << option << endl; // subtraction calculator question
						cout << "Subtraction" << endl << endl;
						cout << "Enter first fraction (integer numerator and denominator only, ex: 5/7): ";
						cin >> frac1;
						cout << "Enter second fraction (integer numerator and denominator only, ex: 5/7): ";
						cin >> frac2;
						result = frac1 - frac2;
						cout << frac1 << " - " << frac2 << " = " << result << endl; //feedback
						cout << "Press 0-Main Menu, 1-Addition, 2-Subtraction, " 
			 			 		 << "3-Multiplication, 4-Division, 5-Reducing "<< endl;
						break;
				case 3: cout << "Option: " << option << endl; //multiplication calculator question
						cout << "Multiplication" << endl << endl;
						cout << "Enter first fraction ((integer numerator and denominator only, ex: 5/7): ";
						cin >> frac1;
						cout << "Enter second fraction (integer numerator and denominator only, ex: 5/7): ";
						cin >> frac2;
						result = frac1 * frac2;
						cout << frac1 << " * " << frac2 << " = " << result << endl; //feedback
						cout << "Press 0-Main Menu, 1-Addition, 2-Subtraction, " 
			 			 		 << "3-Multiplication, 4-Division, 5-Reducing "<< endl;
						break;
	            case 4: cout << "Option: " << option << endl; //division calculator question
						cout << "Division" << endl << endl;
						cout << "Enter first fraction (integer numerator and denominator only, ex: 5/7): ";
						cin >> frac1;
						cout << "Enter second fraction (integer numerator and denominator only, ex: 5/7): ";
						cin >> frac2;
						result = frac1 / frac2;
						cout << frac1 << " / " << frac2 << " = " << result << endl; //feedback
						cout << "Press 0-Main Menu, 1-Addition, 2-Subtraction, " 
			 			 		 << "3-Multiplication, 4-Division, 5-Reducing "<< endl;
						break;
	            case 5: cout << "Option: " << option << endl; // reducing calculator question
						cout << "Reducing" << endl << endl;
						cout << "Enter a fraction (integer numerator and denominator only, ex: 5/7): ";
						cin >> numer >> trash >> denom; 
						frac1.setNum(numer); //setting numerator with random numbers
						frac1.setDen(denom); //setting denominator with random numbers
						// displaying feedback using accessors
						cout << frac1.getNum() << "/" << frac1.getDen() << " = " << frac1 << endl;
						cout << "Press 0-Main Menu, 1-Addition, 2-Subtraction, " 
			 			 		 << "3-Multiplication, 4-Division, 5-Reducing "<< endl;
						break;
				default: cout << "Option: " << option<< endl;
						 cout << "Invalid Choice." 
						"Please enter valid number 1, 2, 3, 4, 5, or 0: ";
	            cout << endl;
				}	
		}while (option != 0);
}

/***************************************************
#Function Definition#
Name:			subMenuQuiz
Purpose:		Use to select option for quiz
				menu from keyboard,
Incoming:		None
Outgoing:		menu option (int)
Return:			None
*****************************************************/
void subMenuQuiz()
{
	cout<< endl
		<< "   *******************************************" << endl
		<< "   *                Quiz Menu                *" << endl
		<< "   *******************************************" << endl
		<< "   *              1. Addition Quiz           *" << endl
		<< "   *           2. Subtraction Quiz           *" << endl
		<< "   *          3. Multiplication Quiz         *" << endl
		<< "   *            4. Division Quiz             *" << endl
		<< "   *             5. Reducing Quiz            *" << endl
		<< "   *              0. Main Menu               *" << endl
		<< "   *******************************************" << endl
		<< "      Enter Option (1, 2, 3, 4, 5, or 0 ): ";
}		

/***************************************************
#Function Definition#
Name:			addQuiz
Purpose:		To provide addition quiz question to
				the user
Incoming:		answer for the quiz (fraction int), 
				numerator and denominator (fraction, int)
Outgoing:		random numbers, questions that are 
				fractions (num and dom int).
Return:			score
*****************************************************/
int additionQuiz(int& score)
{
	Fraction result1, result2, result3, result4, answer1, answer2, answer3, answer4;
	// fractions with random numbers for numerators and denominators
	srand(time(0));	
	Fraction f1(((rand() % 19) + 1), ((rand() % 7) + 1));
	Fraction f2(((rand() % 19) + 1), ((rand() % 7) + 1));
	Fraction f3(((rand() % 19) + 1), ((rand() % 7) + 1));
	Fraction f4(((rand() % 19) + 1), ((rand() % 7) + 1));
	result1 = f1 + f2;
	result2 = f1 + f3;
	result3 = f2 + f4;
	result4 = f3 + f4;
	cout << "Enter your answer in fraction and simplify as much as possible (ex: 5/7) " << endl;
	cout << "Question 1: " << f1 << " + "  << f2 << " = ";
	cin >> answer1;
	cout << "Question 2: " << f1 << " + "  << f3 << " = ";
	cin >> answer2;
	cout << "Question 3: " << f2 << " + "  << f4 << " = ";
	cin >> answer3;
	cout << "Question 4: " << f3 << " + "  << f4 << " = ";
	cin >> answer4;
	// determining the score of the user
	if (result1 == answer1 && result2 == answer2 && result3 == answer3 && result4 == answer4)
		{
		score = 100;
		}
    if ((result1 != answer1 && result2 == answer2 && result3 == answer3 && result4 == answer4)
		|| (result1 == answer1 && result2 != answer2 && result3 == answer3 && result4 == answer4)
		|| (result1 == answer1 && result2 == answer2 && result3 != answer3 && result4 == answer4)
		|| (result1 == answer1 && result2 == answer2 && result3 == answer3 && result4 != answer4))
		{
		score = 75;
		}
	if ((result1 != answer1 && result2 != answer2 && result3 == answer3 && result4 == answer4)
		|| (result1 == answer1 && result2 != answer2 && result3 != answer3 && result4 == answer4)
		|| (result1 == answer1 && result2 == answer2 && result3 != answer3 && result4 != answer4)
		|| (result1 != answer1 && result2 == answer2 && result3 == answer3 && result4 != answer4))
		{
		score = 50;
		}
	 if ((result1 != answer1 && result2 != answer2 && result3 != answer3 && result4 == answer4)
		|| (result1 == answer1 && result2 != answer2 && result3 != answer3 && result4 != answer4)
		|| (result1 != answer1 && result2 == answer2 && result3 != answer3 && result4 != answer4)
		|| (result1 != answer1 && result2 != answer2 && result3 == answer3 && result4 != answer4))
		{
		score = 25;
		}
	if  (result1 != answer1 && result2 != answer2 && result3 != answer3 && result4 != answer4)
		{
		score = 0;
		}
	return score;
}

/***************************************************
#Function Definition#
Name:			subtractionQuiz
Purpose:		To provide subtraction quiz question 
				to the user
Incoming:		answer for the quiz (fraction int), 
				numerator and denominator (fraction, int)
Outgoing:		random numbers, questions that are 
				fractions (num and dom int).
Return:			score
*****************************************************/
int subtractionQuiz(int& score)
{
	Fraction result1, result2, result3, result4, answer1, answer2, answer3, answer4;
	// fractions with random numbers for numerators and denominators
	srand(time(0));	
	Fraction f1(((rand() % 19) + 1), ((rand() % 7) + 1));
	Fraction f2(((rand() % 19) + 1), ((rand() % 7) + 1));
	Fraction f3(((rand() % 19) + 1), ((rand() % 7) + 1));
	Fraction f4(((rand() % 19) + 1), ((rand() % 7) + 1));
	result1 = f1 - f2;
	result2 = f1 - f3;
	result3 = f2 - f4;
	result4 = f3 - f4;
	cout << "Enter your answer in fraction and simplify as much as possible (ex: 5/7) " << endl;
	cout << "Question 1: " << f1 << " - "  << f2 << " = ";
	cin >> answer1;
	cout << "Question 2: " << f1 << " - "  << f3 << " = ";
	cin >> answer2;
	cout << "Question 3: " << f2 << " - "  << f4 << " = ";
	cin >> answer3;
	cout << "Question 4: " << f3 << " - "  << f4 << " = ";
	cin >> answer4;
	// comparing users answers for score
	if (result1 == answer1 && result2 == answer2 && result3 == answer3 && result4 == answer4)
		{
		score = 100;
		}
    if ((result1 != answer1 && result2 == answer2 && result3 == answer3 && result4 == answer4)
		|| (result1 == answer1 && result2 != answer2 && result3 == answer3 && result4 == answer4)
		|| (result1 == answer1 && result2 == answer2 && result3 != answer3 && result4 == answer4)
		|| (result1 == answer1 && result2 == answer2 && result3 == answer3 && result4 != answer4))
		{
		score = 75;
		}
	if ((result1 != answer1 && result2 != answer2 && result3 == answer3 && result4 == answer4)
		|| (result1 == answer1 && result2 != answer2 && result3 != answer3 && result4 == answer4)
		|| (result1 == answer1 && result2 == answer2 && result3 != answer3 && result4 != answer4)
		|| (result1 != answer1 && result2 == answer2 && result3 == answer3 && result4 != answer4))
		{
		score = 50;
		}
	 if ((result1 != answer1 && result2 != answer2 && result3 != answer3 && result4 == answer4)
		|| (result1 == answer1 && result2 != answer2 && result3 != answer3 && result4 != answer4)
		|| (result1 != answer1 && result2 == answer2 && result3 != answer3 && result4 != answer4)
		|| (result1 != answer1 && result2 != answer2 && result3 == answer3 && result4 != answer4))
		{
		score = 25;
		}
	if  (result1 != answer1 && result2 != answer2 && result3 != answer3 && result4 != answer4)
		{
		score = 0;
		}
	return score;
}

/***************************************************
#Function Definition#
Name:			multiplicationQuiz
Purpose:		To provide multiplication quiz question 
				to the user
Incoming:		answer for the quiz (fraction int), 
				numerator and denominator (fraction, int)
Outgoing:		random numbers, questions that are 
				fractions (num and dom int).
Return:			score
*****************************************************/
int multiplicationQuiz(int& score)
{
	Fraction result1, result2, result3, result4, answer1, answer2, answer3, answer4;
	// fractions with random numbers for numerators and denominators
	srand(time(0));	
	Fraction f1(((rand() % 19) + 1), ((rand() % 7) + 1));
	Fraction f2(((rand() % 19) + 1), ((rand() % 7) + 1));
	Fraction f3(((rand() % 19) + 1), ((rand() % 7) + 1));
	Fraction f4(((rand() % 19) + 1), ((rand() % 7) + 1));
	result1 = f1 * f2;
	result2 = f1 * f3;
	result3 = f2 * f4;
	result4 = f3 * f4;
	cout << "Enter your answer in fraction and simplify as much as possible (ex: 5/7) " << endl;
	cout << "Question 1: " << f1 << " * "  << f2 << " = ";
	cin >> answer1;
	cout << "Question 2: " << f1 << " * "  << f3 << " = ";
	cin >> answer2;
	cout << "Question 3: " << f2 << " * "  << f4 << " = ";
	cin >> answer3;
	cout << "Question 4: " << f3 << " * "  << f4 << " = ";
	cin >> answer4;
	// determining the answers for score
	if (result1 == answer1 && result2 == answer2 && result3 == answer3 && result4 == answer4)
		{
		score = 100;
		}
    if ((result1 != answer1 && result2 == answer2 && result3 == answer3 && result4 == answer4)
		|| (result1 == answer1 && result2 != answer2 && result3 == answer3 && result4 == answer4)
		|| (result1 == answer1 && result2 == answer2 && result3 != answer3 && result4 == answer4)
		|| (result1 == answer1 && result2 == answer2 && result3 == answer3 && result4 != answer4))
		{
		score = 75;
		}
	if ((result1 != answer1 && result2 != answer2 && result3 == answer3 && result4 == answer4)
		|| (result1 == answer1 && result2 != answer2 && result3 != answer3 && result4 == answer4)
		|| (result1 == answer1 && result2 == answer2 && result3 != answer3 && result4 != answer4)
		|| (result1 != answer1 && result2 == answer2 && result3 == answer3 && result4 != answer4))
		{
		score = 50;
		}
	if ((result1 != answer1 && result2 != answer2 && result3 != answer3 && result4 == answer4)
		|| (result1 == answer1 && result2 != answer2 && result3 != answer3 && result4 != answer4)
		|| (result1 != answer1 && result2 == answer2 && result3 != answer3 && result4 != answer4)
		|| (result1 != answer1 && result2 != answer2 && result3 == answer3 && result4 != answer4))
		{
		score = 25;
		}
	if  (result1 != answer1 && result2 != answer2 && result3 != answer3 && result4 != answer4)
		{
		score = 0;
		}
	return score;
}

/***************************************************
#Function Definition#
Name:			divisionQuiz
Purpose:		To provide division quiz question 
				to the user
Incoming:		answer for the quiz (fraction int), 
				numerator and denominator (fraction, int)
Outgoing:		random numbers, questions that are 
				fractions (num and dom int).
Return:			score
*****************************************************/
int divisionQuiz(int& score)
{
	Fraction result1, result2, result3, result4, answer1, answer2, answer3, answer4;
	// fractions with random numbers for numerators and denominators
	srand(time(0));	
	Fraction f1(((rand() % 19) + 1), ((rand() % 7) + 1));
	Fraction f2(((rand() % 19) + 1), ((rand() % 7) + 1));
	Fraction f3(((rand() % 19) + 1), ((rand() % 7) + 1));
	Fraction f4(((rand() % 19) + 1), ((rand() % 7) + 1));
	result1 = f1 / f2;
	result2 = f1 / f3;
	result3 = f2 / f4;
	result4 = f3 / f4;
	cout << "Enter your answer in fraction and simplify as much as possible (ex: 5/7) " << endl;
	cout << "Question 1: " << f1 << " / "  << f2 << " = ";
	cin >> answer1;
	cout << "Question 2: " << f1 << " / "  << f3 << " = ";
	cin >> answer2;
	cout << "Question 3: " << f2 << " / "  << f4 << " = ";
	cin >> answer3;
	cout << "Question 4: " << f3 << " / "  << f4 << " = ";
	cin >> answer4;
	// comparing answers for score
	if (result1 == answer1 && result2 == answer2 && result3 == answer3 && result4 == answer4)
		{
		score = 100;
		}
    if ((result1 != answer1 && result2 == answer2 && result3 == answer3 && result4 == answer4)
		|| (result1 == answer1 && result2 != answer2 && result3 == answer3 && result4 == answer4)
		|| (result1 == answer1 && result2 == answer2 && result3 != answer3 && result4 == answer4)
		|| (result1 == answer1 && result2 == answer2 && result3 == answer3 && result4 != answer4))
		{
		score = 75;;
		}
	if ((result1 != answer1 && result2 != answer2 && result3 == answer3 && result4 == answer4)
		|| (result1 == answer1 && result2 != answer2 && result3 != answer3 && result4 == answer4)
		|| (result1 == answer1 && result2 == answer2 && result3 != answer3 && result4 != answer4)
		|| (result1 != answer1 && result2 == answer2 && result3 == answer3 && result4 != answer4))
		{
		score = 50;
		}
	if ((result1 != answer1 && result2 != answer2 && result3 != answer3 && result4 == answer4)
		|| (result1 == answer1 && result2 != answer2 && result3 != answer3 && result4 != answer4)
		|| (result1 != answer1 && result2 == answer2 && result3 != answer3 && result4 != answer4)
		|| (result1 != answer1 && result2 != answer2 && result3 == answer3 && result4 != answer4))
		{
		score = 25;
		}
	if  (result1 != answer1 && result2 != answer2 && result3 != answer3 && result4 != answer4)
		{
		score = 0;
		}
	return score;
}

/***************************************************
#Function Definition#
Name:			reducingQuiz
Purpose:		To provide subtraction reducing question 
				to the user
Incoming:		answer for the quiz (fraction int), 
				numerator and denominator (fraction, int)
Outgoing:		random numbers, questions that are 
				fractions (num and dom int).
Return:			score
*****************************************************/
int reducingQuiz(int& score)
{
	// fractions with random numbers for numerators and denominators
	srand(time(0));	
	int numer = (rand() % 2 == 0) + 2 * (rand() % 20) + 2, denom =  (rand() % 2 == 0) + 2 * (rand() % 8) + 2;
	int numer2 = (rand() % 3 == 0) + 2 * (rand() % 20) + 2, denom2 = (rand() % 3 == 0) + 2 * (rand() % 8) + 2;
	int numer3 = (rand() % 4 == 0) + 2 * (rand() % 20) + 2, denom3 = (rand() % 4 == 0) + 2 * (rand() % 8) + 2;
	int numer4 = (rand() % 5 == 0) + 2 * (rand() % 20) + 2, denom4 = (rand() % 5 == 0) + 2 * (rand() % 8) + 2;
	Fraction result1, result2, result3, result4, answer1, answer2, answer3, answer4,
	fraction1, fraction2, fraction3, fraction4;
	fraction1.setNum(numer);
	fraction1.setDen(denom);
	fraction2.setNum(numer2);
	fraction2.setDen(denom2);
	fraction3.setNum(numer3);
	fraction3.setDen(denom3);
	fraction4.setNum(numer4);
	fraction4.setDen(denom4);
	cout << "Enter your answer in fraction and simplify as much as possible (ex: 5/7) " << endl;
	cout << "Question 1: " << fraction1.getNum() << "/" << fraction1.getDen() << " = ";
	cin >> answer1;
	cout << "Question 2: " << fraction2.getNum() << "/" << fraction2.getDen() << " = ";
	cin >> answer2;
	cout << "Question 3: " << fraction3.getNum() << "/" << fraction3.getDen() << " = ";
	cin >> answer3;
	cout << "Question 4: " << fraction4.getNum() << "/" << fraction4.getDen() << " = ";
	cin >> answer4;
	fraction1.reduce();
	fraction2.reduce();
	fraction3.reduce();
	fraction4.reduce();
	result1 = fraction1;
	result2 = fraction2;
	result3 = fraction3;
	result4 = fraction4;
	// comparing answers for score
	if (result1 == answer1 && result2 == answer2 && result3 == answer3 && result4 == answer4)
		{
		score = 100;
		}
    if ((result1 != answer1 && result2 == answer2 && result3 == answer3 && result4 == answer4)
		|| (result1 == answer1 && result2 != answer2 && result3 == answer3 && result4 == answer4)
		|| (result1 == answer1 && result2 == answer2 && result3 != answer3 && result4 == answer4)
		|| (result1 == answer1 && result2 == answer2 && result3 == answer3 && result4 != answer4))
		{
		score = 75;
		}
	if ((result1 != answer1 && result2 != answer2 && result3 == answer3 && result4 == answer4)
		|| (result1 == answer1 && result2 != answer2 && result3 != answer3 && result4 == answer4)
		|| (result1 == answer1 && result2 == answer2 && result3 != answer3 && result4 != answer4)
		|| (result1 != answer1 && result2 == answer2 && result3 == answer3 && result4 != answer4))
		{
		score = 50;
		}
	if ((result1 != answer1 && result2 != answer2 && result3 != answer3 && result4 == answer4)
		|| (result1 == answer1 && result2 != answer2 && result3 != answer3 && result4 != answer4)
		|| (result1 != answer1 && result2 == answer2 && result3 != answer3 && result4 != answer4)
		|| (result1 != answer1 && result2 != answer2 && result3 == answer3 && result4 != answer4))
		{
		score = 25;
		}
	if  (result1 != answer1 && result2 != answer2 && result3 != answer3 && result4 != answer4)
		{
		score = 0;
		}
	return score;
}

/*************************************************
#Function Definition#
Name:			printResult
Purpose:		Output the most recent quiz result 
Incoming:		score
Outgoing:		score
Return:			None
***************************************************/
void printResult(int score)
{
	//display recent quiz score
	cout << "         MOST RECENT QUIZ SCORE IS " << score << "/100 !" << endl <<endl;
}

