#include <iostream>
#include <string>

using namespace std;

class Employee
{
private: 
	string name;
	int hours;
public: 
	void setName(string);
	void setHours(int);
	string getName();
	int getHours();
};

const int NUM_EMP = 5;

int main()
{
	
	int count, hours;
	string name;
	Employee emp; //Create an object from a class

	cout << "This program keeps employee information.\n\n";
	cout << "Enter an employe name: ";
	cin >> name;
	emp.setName(name);

	cout << "Enter employee hours: ";
	cin >> hours;
	emp.setHours(hours);

	cout << "\nEmployee Hours Table\n";
	cout << "====================\n";
	cout << emp.getName() << " " << emp.getHours()
		<< endl;

	cout << endl;
	system("Pause");
	return 0;
}

void Employee::setName(string newName) // mutator objects
{
	name = newName;
}

void Employee::setHours(int newHours)
{
	hours = newHours;
}

string Employee::getName()
{
	return name;
}

int Employee::getHours()
{
	return hours;
}