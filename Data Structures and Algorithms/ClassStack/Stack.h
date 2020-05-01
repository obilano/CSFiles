#ifndef _STACK_H
#define _STACK_H
/*********************************************************************
	Programmer:			Oberon Ilano, Antonio Salgado
	Author(s):       	Dr. Janet Jenkins, Oberon Ilano, Antonio Salgado	
	Assignment:			Class Stack Activity
	Description:		This program wil allow users/students to use  
						Class Stack dynamically
	Due Date:			January 17, 2019
	Course:				CS355 - Data Structures and Algorithms
**********************************************************************/
#include <iostream>
using namespace std;

class Stack{
    int* data;
    int top; 
    int max;
public:
    Stack();//set max to 5
    Stack(int max_size); //set max to max_size
    ~Stack();
    Stack(const Stack&);
    Stack operator=(const Stack&);
    bool Push(int item);
    bool Pop(int& item);
    bool IsEmpty()const;
    bool IsFull()const;
    bool Resize();
    void Print(ostream& os)const;      
};
#endif
