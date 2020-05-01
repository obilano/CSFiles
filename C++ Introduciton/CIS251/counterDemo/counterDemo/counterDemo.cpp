//This program displays a list of numbers and their squares.

#include <iostream>

using namespace std;

int main()

{

	const int MIN_NUMBER = 1, //Strating number to square
			  MAX_NUMBER = 10; //Maximum number to square

	int num;  //Counter variable

	cout << "Number Number Squared\n";
	cout << "------ --------------\n";
	
	num = MIN_NUMBER; //Initialize counter variable
	while (num <= MAX_NUMBER)
	{

		cout << num << "\t\t" << (num * num) << endl;
		num++; //Increment the counter
	}

	system("Pause");
	return 0;

}