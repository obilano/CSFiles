#include <iostream>
#include <fstream>
using namespace std;
const int MAX_FILE_SIZE = 30;
const int MAX_NUMBERS = 1000;
int main()
{
	double values[MAX_NUMBERS];
	int numValues = 0;
	ifstream infile;
	ofstream outfile;
	char inputName[MAX_FILE_SIZE];
	char outputName[MAX_FILE_SIZE];
	cout << "What is the input file name? ";
	cin.getline(inputName, MAX_FILE_SIZE);
	cout << "What is the output file name? ";
	cin.getline(outputName, MAX_FILE_SIZE);
	infile.open(inputName);
	if(infile.fail())
		{
			cout << "ERROR: infile could not be open. "<< endl;
			exit(1);
		}	
	outfile.open(outputName);	
	if(outfile.fail())
		{
			cout << "ERROR: outfile could not be open. "<< endl;
			exit(1);
		}	
	
	while (infile >> values[numValues])
		numValues++;
	infile.close();
	
	for (int i = 0; i < numValues; i++)
		outfile << values[i] << endl;
	outfile.close();
		
		
	return 0;
}
