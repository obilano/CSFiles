#include <iostream>

using namespace std;

int main()

{

	char choice;

	do
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
		cin >> choice;
		choice = toupper(choice);

		switch (choice)
		{
		case 'O':
			cout << "You opened the database.\n\n";
			system("Pause");
			system("cls");
			break;
		case 'A':
			cout << "You added a record.\n\n";
			system("Pause");
			system("cls");
			break;
		case 'E':
			cout << "You edited a record\n\n";
			system("Pause");
			system("cls");
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
	} while (choice != 'Q');   //end of while
	system("Pause");
	return 0;

}