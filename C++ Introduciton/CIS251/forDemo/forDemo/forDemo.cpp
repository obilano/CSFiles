#include <iostream>

using namespace std;

int main()
{

	unsigned int num, factorial = 1;

	cout << "This program calculates the factorial of a number.\n";
	cout << "Enter a number: ";
	cin >> num;

	for (int i = 1; i <= num; i++)
	{
		factorial = factorial * i;
	}
	
	cout << "The factorial of " << num << " is " << factorial
		<< endl << endl;

	system("Pause");
	return 0;
}