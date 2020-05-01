/*********************************************************************
	Programmer:			Oberon Ilano, Antonio Salgado
	Author(s):       	Dr. Janet Jenkins, Oberon Ilano, Antonio Salgado
	Assignment:			Class Stack Activity
	Description:		This program wil allow users/students to use  
						Class Stack dynamically
	Due Date:			January 17, 2019
	Course:				CS355 - Data Structures and Algorithms
**********************************************************************/
#include "Stack.h"

int main(){
    
    Stack s1;
   	bool flag = true;
   	int temp = 0;
   	cout << "Enter the numbers to stack." << endl;
    do{
        cin >> temp;
        flag = s1.Push(temp);
        s1.Print(cout);
        s1.Resize();
        cout << "Press X to Exit" << endl;
    	if(temp == 'X' || temp == 'x'){
    	exit(1);
	}
	
    }while (flag);

    cout << "STOPPED! NO MORE ROOM. " << endl << endl;
    flag = true;
    
    do{
        system("pause");
        flag = s1.Pop(temp);
        cout << temp << " was popped" << endl;
        s1.Print(cout);
    }while (flag);

    cout << "STOPPED! NO MORE TO REMOVE" << endl;
    return 0;
}

