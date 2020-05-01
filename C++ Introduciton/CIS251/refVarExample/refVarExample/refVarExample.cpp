#include <iostream>

int doubleNum(int); //Prototype
void doubleNumRef(int &);
void doubleNumRef2(int, int &);

using namespace std;

int main()
{
	int number, result;

	cout << "This program demonstrates reference parameters.\n";

	//Return function example
	cout << "Enter a number: ";
	cin >> number;
	result = doubleNum(number); //Function call
	cout << "The double of that number is " << result
		<< endl << endl;
		
	//Return parameter function example
	cout << "Enter another number: ";
	cin >> number;
	doubleNumRef(number); //Function call
	cout << "The double of second that number is " << number
		<< endl << endl;

	//Return parameter function example # 2
	cout << "Enter yet another number: ";

	cin >> number;
	doubleNumRef2(number, result); //Function call
	cout << "The double of that third number is " << result
		<< endl << endl;

	system("Pause");
	return 0;
}

int doubleNum(int num) //Pass by value example
{
	int doubled; //Local variable

	doubled = 2 * num;
	return doubled;
}

void doubleNumRef(int &num) // Pass by reference example
{
	
	num= 2 * num;
}

void doubleNumRef2(int num, int &res) // Pass by reference example
{

	res = 2 * num;

}