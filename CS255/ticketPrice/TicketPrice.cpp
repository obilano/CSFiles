/*********************************************************************
	Programmer:			Oberon Ilano
	Author(s):       	Dr. Janet Jenkins, Oberon Ilano	
	Assignment:			5
	Description:		This program calculates ticket price
	Date:				September 13, 2018
	Course:				CS255 - Computer Science II
**********************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;
//***************************************
//##### Constant for Prices & Tax #####
//***************************************
const double BT_PRICE = 0.00, C_PRICE = 3.00, A_PRICE = 6.00,
			 S_PRICE = 4.50, TAX_AMOUNT = 0.085;
//****************************
//#####  Class Header  #####
//****************************
class Ticket
{
	private: //data members
		int numBT, numChild, numAdult, numSenior;
		double totalPrice, taxSale, subT;
		
	public:
		Ticket(); //constructors
		Ticket(int b);
	    Ticket(int b, int c);
	    Ticket(int b, int c, int a);
	    Ticket(int b, int c, int a, int s);
	   	Ticket(double p);
	    Ticket(double p, double t);
	    Ticket(double p, double t, double s);
		//Mutator Functions (set) declaration
		void setNumBT (int b);
	    void setNumChild (int c);
	    void setNumAdult (int a);
	    void setNumSenior (int s);
		//Accessor Method (get) declaration
	    int getNumBT() const;
	    int getNumChild() const;
	    int getNumAdult() const;
	    int getNumSenior() const;
	    double getSubT() const;
		double getTaxSale() const;
	    double getTotalPrice() const;
	    //input declaration
	    void putMe();
	    //output declaration 
	    void display() const;
		//menu option
		void menu () const;
		//function declaration for calculation 
		void tPrice(const Ticket& ride);
};
//*************************************
/*#######  Class Definition  ########*/
//*************************************
Ticket::Ticket()
{
	 //default constructor
	 int numBT, numChild, numAdult, numSenior;
	 double totalPrice, taxSale, subT;
}
Ticket::Ticket(int b)
{
	//data 1
    numBT = b;
    numChild = 0;
    numAdult = 0;
    numSenior = 0;
}
Ticket::Ticket(int b, int c)
{
	//data 2  
    numBT = b;
    numChild = c;
    numAdult = 0;
    numSenior = 0;
}
Ticket::Ticket(int b, int c, int a)
{
    //data 3
   	numBT = b;
    numChild = c;
    numAdult = a;
    numSenior = 0;
}
Ticket::Ticket(int b, int c, int a, int s)
{
	//data 4
    numBT = b;
    numChild = c;
    numAdult = a;
    numSenior = s;
}
Ticket::Ticket(double p)
{
	//data 5
	totalPrice = p;
}
Ticket::Ticket(double p, double t)
{
	//data 6
	totalPrice = p;
	taxSale = t;
}
Ticket::Ticket(double p, double t, double s)
{
	//data 7	
	totalPrice = p;
	taxSale = t;
	subT = s;
}
/******************************************
		Function/Methods Definitions
******************************************/
/*###### Mutator Functions (set) #######*/
/*****************************************************
Name:			setNumBT
Purpose:		change/modify a number for numBT
Incoming:		number (int)
Outgoing:		number (int)
Return:			None
******************************************************/
void Ticket::setNumBT(int b)
{
	numBT = b;
}
/*****************************************************
Name:			setNumChild
Purpose:		change/modify a number for numChild
Incoming:		number (int)
Outgoing:		number (int)
Return:			None
******************************************************/
void Ticket::setNumChild (int c)
{	
	numChild = c;
}
/*****************************************************
Name:			setNumAdult
Purpose:		change/modify a number for numAdult
Incoming:		number (int)
Outgoing:		number (int)
Return:			None
******************************************************/
void Ticket::setNumAdult (int a)
{
	numAdult = a;
}
/*****************************************************
Name:			setNumSenior
Purpose:		change/modify a number for numSenior
Incoming:		number (int)
Outgoing:		number (int)
Return:			None
******************************************************/
void Ticket::setNumSenior (int s)
{
	numSenior = s;
}
//***************************************
/*####### Accessor Method (get) #######*/
//***************************************
/*****************************************************
Name:			getNumBT
Purpose:		read  number from numBT
Incoming:		none
Outgoing:		number (int)
Return:			numBT (int)
******************************************************/
int Ticket::getNumBT() const
{
	return numBT;
}
/*****************************************************
Name:			getNumChild
Purpose:		read  number from numChild
Incoming:		none
Outgoing:		number (int)
Return:			numChild (int)
******************************************************/
int Ticket::getNumChild() const
{
	return numChild;
}
/*****************************************************
Name:			getNumAdult
Purpose:		read  number from numAdult
Incoming:		none
Outgoing:		number (int)
Return:			numAdult (int)
******************************************************/
int Ticket::getNumAdult() const
{
	return numAdult;
}
/*****************************************************
Name:			getNumSenior
Purpose:		read  number from numSenior
Incoming:		none
Outgoing:		number (int)
Return:			numSenior (int)
******************************************************/
int Ticket::getNumSenior() const
{
	return numSenior;
}
/*****************************************************
Name:			getSubT
Purpose:		read  number from subT
Incoming:		none
Outgoing:		number (double)
Return:			subT (double)
******************************************************/
double Ticket::getSubT() const
{
	return subT;
}
/*****************************************************
Name:			getTaxSale
Purpose:		read  number from taxSale
Incoming:		none
Outgoing:		number (double)
Return:			taxSale (double)
******************************************************/
double Ticket::getTaxSale() const
{
	return taxSale;
}
/*****************************************************
Name:			getTotalPrice
Purpose:		read  number from totalPrice
Incoming:		none
Outgoing:		number (double)
Return:			totalPrice (double)
******************************************************/
double Ticket::getTotalPrice() const
{
	return totalPrice;
}
/**************************************************************************
Name:			putMe
Purpose:		Input number of guests (int) from keyboard to data members 
				numBT, numChild, numAdult, and numSenior. Valaidate if the 
				input number is not a negative or character and if a double 
				is input then it will automatically change to integer.
Incoming:		Number of nuBT, numChild, numAdult,
				numSenior (int)
Outgoing:		Number of nuBT, numChild, numAdult,
				numSenior (int)
Return:			None
****************************************************************************/
void Ticket::putMe()
{
	cout << "Enter [whole number only] how many baby/toddler (ages 0 to 4): ";
	while(!(cin >> numBT) || (numBT < 0)) // validating input
		{	
			cout << endl;
			cout << "Enter a whole positive number only: ";
			cin.clear();
			cin.ignore(10, '\n');
		}
	cout << endl;
	cout << "Enter [whole number only] how many child (ages 5 to 12): ";
	while(!(cin >> numChild) || (numChild < 0))
		{	
			cout << endl;
			cout << "Enter a whole positive number only: ";
			cin.clear();
			cin.ignore(10, '\n');
		}
	cout << endl;
	cout << "Enter [whole number only] how many adult(s) (ages 13 to 59): ";
	while(!(cin >> numAdult) || (numAdult < 0))
		{	
			cout << endl;
			cout << "Enter a whole positive number only: ";
			cin.clear();
			cin.ignore(10, '\n');
		}
	cout << endl;
	cout << "Enter [whole number only] how many senior(s) (ages 60 or older): ";
	while(!(cin >> numSenior) || (numSenior < 0))
		{	
			cout << endl;
			cout << "Enter a whole positive number only: ";
			cin.clear();
			cin.ignore(10, '\n');
		}
	cout << endl;
}
/****************************************************
Name:			tPrice
Purpose:		Calculate the subtotal, tax sale,
				and total price of tickets.
Incoming:		Number of nuBT, numChild, numAdult,
				and numSenior (int)
Outgoing:		Total Prices for subT, taxSale and
				totalPrice (double)
Return:			None
*****************************************************/
void Ticket::tPrice(const Ticket& ride)
{
	subT = ((ride.numBT * BT_PRICE) + (ride.numChild * C_PRICE) 
		   + (ride.numAdult * A_PRICE) + (ride.numSenior * S_PRICE));
	taxSale = subT * TAX_AMOUNT;
	totalPrice = subT + taxSale;
}
/****************************************************
Name:			display
Purpose:		display numbers of guests numBT, 
				numChild, numAdult, and numSenior
Incoming:		Number of nuBT, numChild, numAdult,
				numSenior (int) and total prices for
				subT, taxSale, and totalPrice (double)
Outgoing:		Number of nuBT, numChild, numAdult,
				and numSenior (int). Prices for
				subT, taxSale, and totalPrice (double)
Return:			None
*****************************************************/
void Ticket::display() const
{
	cout << "*****************************************************" << endl;
	cout << "Baby/Toddler: " << numBT << " Child: " << numChild 
		 << " Adult(s): " << numAdult << " Senior(s): " << numSenior << endl;
	cout << "*****************************************************" << endl;
	cout << "Subtotal: $" << fixed << setprecision(2) << subT << endl;
	cout << "Sale Tax: $" << fixed << setprecision(2) << taxSale << endl;
	cout << "Grand Total: $" << fixed << setprecision(2) 
		 << totalPrice << endl;
	cout << "*****************************************************" << endl 
		 << endl;
}
/*****************************************************
Name:			menu
Purpose:		Use to select option from the keyboard
Incoming:		None
Outgoing:		menu option (int)
Return:			None
******************************************************/
void Ticket::menu() const
{
	//displaying a banner for  price lists
	cout << "**************************************************" << endl;
	cout << "*               Park Ride Prices                 *" << endl;
	cout << "**************************************************" << endl;
	cout << "*     Baby or Toddler 0 to 4 Years Old: Free     *" << endl;	
	cout << "*       Children 5 to 12 Years Old: $3.00        *" << endl;
	cout << "*        Adult 13 to 59 Years Old: $5.00         *" << endl;
	cout << "*      Senior 60 Years Old or Older: $4.50       *" << endl;
	cout << "**************************************************" << endl 
		 << endl;
	//option selection
	cout << "   *******************************************" << endl;
	cout << "   *             Menu Selection              *" << endl;
	cout << "   *             1. Buy Ticket               *" << endl;
	cout << "   *  2. Use Accessor Method to Buy Ticket   *" << endl;
	cout << "   *  3. Use Mutator Method to Buy Ticket    *" << endl;
	cout << "   *             0. Quit Menu                *" << endl;
	cout << "   *******************************************" << endl;
	cout << "      Enter Option (1, 2, 3, or 0 to Quit): ";
}
//*************************
//##### Main Driver #####
//*************************
int main ()
{
	cout << "     This program calculate Park Ride Ticket      " << endl;
	int babdler, kid, grown, elder, option;
	Ticket group1, group2, group3, choice;
	do
	{
		choice.menu(); //menu function call
		cin >> option;				
		switch (option)
			{			
			case 0: cout << "Option: " << option << endl;
					cout << "         ******************************" << endl;
					cout << "         *       Enjoy the Ride!      *" << endl;
					cout << "         ******************************" << endl;
					exit (1);
					break;	
			case 1:	cout << "Option: " << option << endl;
					cout << "Buy Ticket" << endl << endl;		
							group1.putMe(); //input data from keyboard
							group1.tPrice(group1);//calculate group1 input
							group1.display(); //output data
					break;
			case 2: cout << "Option: " << option << endl;
					cout << "Accessor Method" << endl << endl;
					//group2 and group3 are a test to see if both accessor and mutator are 
					//working or not
					group2.putMe();
					group2.tPrice(group2);
					// display # of guest by category, subtotal, sale tax, and total price
					// using accessor (get)
					cout << "***********************************************" << endl;
					cout << "*   Using Accessor (get) to displaying data   *" << endl;
					cout << "***********************************************" << endl;
					cout << "Number of Baby or Toddler: " << group2.getNumBT() << endl;
					cout << "Number of Children: " << group2.getNumChild() << endl;
					cout << "Number of Adult: " << group2.getNumAdult() << endl; 
					cout << "Number of Senior: " << group2.getNumSenior() << endl;
					cout << "Subtotal: $" <<fixed << setprecision(2) << group2.getSubT() 
						 << endl;
					cout << "Tax Sale: $" << fixed << setprecision(2) 
						 << group2.getTaxSale() << endl;
					cout << "Grand Total: $" << fixed << setprecision(2) << group2.getTotalPrice() 
						 << endl << endl;
					break;
			case 3: cout << "Option: " << option << endl;
					cout << "Mutator Method" << endl << endl;
					//Using mutator method (set) and accessor method (get) for display
					cout << "*****************************************************" << endl;
					cout << "*                Using Mutator (Set)                *" << endl;
					cout << "*****************************************************" << endl;
					//validate if the input numbers are not negative if a double is 
					//input then it will automatically change to integer
					cout << "Enter how many baby/toddler (ages 0 to 4): ";
					while(!(cin >> babdler) || (babdler < 0))
						{	
							cout << endl;
							cout << "Enter a whole positive number only: ";
							cin.clear();
							cin.ignore(10, '\n');
						}	
					cout << endl;
					cout << "Enter [whole number only] how many child (ages 5 to 12): ";
					while(!(cin >> kid) || (kid < 0))
						{	
							cout << endl;
							cout << "Enter a whole positive number only: ";
							cin.clear();
							cin.ignore(10, '\n');
						}
					cout << endl;
					cout << "Enter [whole number only] how many adult(s) (ages 13 to 59): ";
					while(!(cin >> grown) || (grown < 0))
						{	
							cout << endl;
							cout << "Enter a whole positive number only: ";
							cin.clear();
							cin.ignore(10, '\n');
						}
					cout << endl;
					cout << "Enter [whole number only] how many senior(s) (ages 60 or older): ";
					while(!(cin >> elder) || (elder < 0))
						{	
							cout << endl;
							cout << "Enter a whole positive number only: ";
							cin.clear();
							cin.ignore(10, '\n');
						}
					cout << endl;
					group3.setNumBT(babdler);
					group3.setNumChild(kid);
					group3.setNumAdult(grown);
					group3.setNumSenior(elder);
					group3.tPrice(group3);
					group3.display();
					break;
			default: cout << "Option: " << option<< endl;
					 cout << "Invalid Choice." 
							 "Please enter valid number 1, 2, 3, or 0 to quit." << endl;
			}	
	}while (option != 0);
			
	return 0;
}
