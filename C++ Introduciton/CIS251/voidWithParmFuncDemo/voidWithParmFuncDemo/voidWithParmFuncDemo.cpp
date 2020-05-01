#include <iostream>

using namespace std;

void displayMenu(); //function prototype
void processChoice(char); //function prototype with paramiter
void openDatabase();
void addRecord();
void editRecord();


int main()
{
	char choice;

	do
	{
		displayMenu(); //function call - where function does its job
		cin >> choice;
		choice = toupper(choice);
		processChoice(choice);  //function to call to process user choice
		
	} while (choice != 'Q');   //end of while
	system("Pause");
	return 0;

}

void displayMenu() //function definition
{
	cout << "*** Database Menu ***\n";
	cout << "=====================\n";
	cout << "O - Open the database\n";
	cout << "A - Add a record\n";
	cout << "E - Edit a record\n";
	cout << "D - Delete a record\n";
	cout << "C - Close the database\n";
	cout << "Q - Quit\n\n";
	cout << "Enter a choice: ";
}

void processChoice(char userChoice)
{
	switch (userChoice)
	{
	case 'O':
		openDatabase();
		break;
	case 'A':
		addRecord();
		break;
	case 'E':
		editRecord();
		break;

	case 'D':
		cout << "You deleted a record\n\n";
		system("Pause");
		system("cls");
		break;
	case 'C':
		cout << "You close the database.\n\n";
		system("Pause");
		system("cls");
		break;
	case 'Q':
		cout << "Thank you for using this program.\n\n";
		break;
	default:
		cout << "Please make a choice from the menu.\n\n";
		system("Pause");
		system("cls");
	} //end of switch
}

void openDatabase()
{
	cout << "You opened the database.\n\n";
	system("Pause");
	system("cls");
}

void addRecord()
{
	cout << "You added a record.\n\n";
	system("Pause");
	system("cls");
}

void editRecord()
{
	cout << "You edited a record\n\n";
	system("Pause");
	system("cls");
}
