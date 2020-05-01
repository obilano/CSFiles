/*********************************************************************
	Programmer:			Oberon Ilano, Antonio Salgado
	Author(s):       	Dr. Janet Jenkins, Oberon Ilano, Antonio Salgado	
	Assignment:			Class Stack Activity
	Description:		This program wil allow users/students to use  
						Class Stack dynamically
	Due Date:			January 17, 2019
	Course:				CS355 - Data Structures and Algorithms
**********************************************************************/
#include "Stack.h"//include Stack header for function declarations

//***************************************************************
//class definition/ implementation
//***************************************************************
//*********************************************************************
//Default Constructor
//*********************************************************************
Stack::Stack(){
   data = new int[max];
   top = -1;
   max = 5;
   
}
//*********************************************************************
//Constructor| iniatilization, set max to max_size
//*********************************************************************
Stack::Stack(int max_size){
    max = max_size;
    data = new int[max];
    top = -1;
}

//*********************************************************************
//Destructor
//*********************************************************************
Stack::~Stack(){
    delete[] data;
}

//deep copy 
Stack::Stack(const Stack&){
    Stack rhs;
    delete[] data;				   
    max = rhs.max;		   
    top = rhs.top;			     
    data = new int[rhs.max];		   			   
    for (int i = 0; i < top; i++)  
        data[i] = rhs.data[i];      
}

//**************************************************************
//Assignment Operator 
//**************************************************************
/**************************************************************
#Function Definition#
Name:			operator=
Purpose:		assign data
Incoming:		
Outgoing:		
Return:			*this
***************************************************************/
Stack Stack::operator=(const Stack&){
    Stack rhs;
    if(this != &rhs){
        delete [] data;
        max = rhs.max;
        top = rhs.top;
        data = new int[max];
        for(int i = 0; i < top; i++){
            data[i] = rhs.data[i];
        }
    }   
    return *this;
}

//**************************************************************
//Push Method
//**************************************************************
bool Stack::Push(int item){
    bool success = false;
    if (!IsFull()){
       success = true;       
       data[++top] = item;
    }
    else
    	cout << "Stack is full and resizing." << endl;
    	//Resize();
    return success;
}

//**************************************************************
//Pop Method
//**************************************************************
bool Stack::Pop(int& item){
    bool success = false;
    if (!IsEmpty()){
       success = true;
       item = data[top--];       
    }
    return success;
}

//**************************************************************
//IsEmpty, check if stack is empty
//**************************************************************
bool Stack::IsEmpty()const{
     return top == -1;
}

//**************************************************************
//IsFull, check if stack is full
//**************************************************************
bool Stack::IsFull()const{
    return top == max - 1;    
}

//**************************************************************
//Resize Method, resize stack size * 2 when it become full
//**************************************************************
bool Stack::Resize(){
	bool SizeUp = false;
	if(IsFull()){
		SizeUp = true;
		int* NewData = new int[max * 2];
		for(int i = 0; i < top; i++)
			NewData[i] = data[i];
		max = max * 2;
		cout << "***STACK SIZE AFTER RESIZING: " 
			 << max << "***" << endl << endl;
		delete[] data;
		data = NewData;
	}
	return SizeUp;
}

/******************************************************
#Function Definition#
Name:			Print
Purpose:		Display stack
Incoming:		None
Outgoing:		integers 
Return:			None
*****************************************************/	
void Stack::Print(ostream& os)const{
    os << "***TOP OF STACK***" << endl;
    for (int i = top; i >= 0; i--){
		os << data[i] << endl;
	}
    os << "***BOTTOM OF STACK***" << endl << endl;

}

