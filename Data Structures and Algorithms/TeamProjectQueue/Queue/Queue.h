/***************************************************************************/
//
//           GROUP:: Holden, Oberon, Antonio, and Darian
//           CLASS::  CS - 355
//           ASSIGNMENT::  Project #3 - Queue Manipulation
//           DATE::  03/21/2019
//           DESCRIPTION::  Queue class that contains different 
//                          methods that successfully navigate 
//                          throughout the queue.
//
/***************************************************************************/



#ifndef _QUEUE_H
#define _QUEUE_H

#include <cstdlib>
#include<iostream>
using namespace std;

template <class T>
class Queue;

//***************************************************************************
//      NODE CLASS DECLARATION
//***************************************************************************
template <class T>
class Node
{
    T data; 
    Node<T>* next;
    
    // CONSTRUCTORS
	Node();
	Node<T>(T d);
	Node<T>(T d, Node<T>* n);
	
	// FRIEND CLASS QUEUE
	friend class Queue<T>;
};

//***************************************************************************
//     QUEUE CLASS DECLARATION
//***************************************************************************
template <class T>
class Queue
{
    Node<T>* cursorpointer;
	Node<T>* front;
	Node<T>* rear;
	void PrintHelp(Node<T>* N)const;
public:
    // CONSTRUCTOR
	Queue();
	~Queue();				// DESTRUCTOR
	Queue(const Queue<T>& q1); // COPY CONSTRUCTOR
	
	// MUTATOR METHODS
	void Enq();
	void Deq();
	Node<T>* Search();
	
	// ACCESSOR METHODS
	void Print()const;
	void PrintCursor()const;
	bool IsEmpty()const;
	
	void moveLeft();
	void moveRight();
	void moveBegin();
	void moveEnd();
	
	// OVERLOADED ASSIGNMENT OPERATOR
    Queue<T>& operator=(const Queue& Qu);	
};

#endif

//***************************************************************************
//     NODE CLASS IMPLEMENTATION
//***************************************************************************

template <class T>
Node<T>::Node():next(NULL){}
template <class T>
Node<T>::Node(T d):data(d), next(NULL){}
template <class T>
Node<T>::Node(T d, Node* n):data(d), next(n){}

//***************************************************************************
//     QUEUE CLASS IMPLEMENTATION
//***************************************************************************

template <class T>
Queue<T>::Queue():front(NULL),rear(NULL){}

// DESTRUCTOR
template <class T>
Queue<T>::~Queue()				
{
    Node<T>* temp = front;
	while(temp != NULL)
	{
		temp = temp->next;
		delete front; 
		front = temp;
	}
}

// COPY CONSTRUCTOR
template <class T>
Queue<T>::Queue(const Queue<T>& q1) 
{
    if (q1.front != NULL)
    {
        front = new Node<T>(q1.front -> data); 
        Node<T>* NTemp = front; 
        Node<T>* temp = q1.front-> next; 
        while (temp != NULL)
        { 
           temp -> next = new Node<T>(temp -> data); 
           temp = temp -> next; 
           NTemp = NTemp -> next; 
           cursorpointer = NTemp;
        }  
    } 
    else{ 
        front = NULL; 
        rear = NULL;
    }
}  
	
// MUTATOR METHODS
template <class T>
void Queue<T>::Enq()
{
    T e;
    cin >> e;
	Node<T>* temp = new Node<T>();
	
	temp -> data = e;
	cursorpointer = temp;
	temp -> next = NULL;
	
	
	if(front == NULL)
	{
		front = temp;
		rear = temp;
	}
	
	else
	{
		rear -> next = temp;
		rear = temp;
	}
	
}

template <class T>
void Queue<T>::Deq()
{
    Node<T>* temp = front;
    if(front == NULL)
    {
        cout << "Queue is empty" << endl;
    }
    
    else if(temp -> next != NULL)
    {
        temp = temp-> next;
        cout << "Deleted Front: " << front -> data << endl;
        free(front);
        front = temp;    
        cursorpointer = front;
    }  
    
    else
    {
        cout << "Deleted Front: " << front -> data << endl;
        free(front);
        front = NULL;
        rear = NULL; 
        cursorpointer = front;
    }
    
}


// ACCESSOR METHODS
template <class T>
Node<T>* Queue<T>::Search()
{
    T e;
    cin >> e;
    Node<T>* temp = front;  
    while (temp != NULL)
        if (temp -> data == e) 
        {
            cout << "Found: " << temp -> data << endl;
            cursorpointer = temp;
            return temp;           
        }
        else 
             temp = temp->next;
             cout << "Not Found" << endl;
             return NULL;
}

template <class T>
void Queue<T>::Print()const
{
    if(front == NULL)
    {
        cout << "Queue is empty" << endl;
    }
    
    cout << "[";   
    PrintHelp(front);
	cout << "]" << endl;
}
template <class T>
void Queue<T>::PrintHelp(Node<T>* N)const
{
	if(N)
	{
        if(N == cursorpointer){
            cout << "[" << N->data << "]";
            PrintHelp(N->next);
        }          
	    else if(N -> next == NULL)
        { 
	        cout << N->data;
	        return;
        }
        else
        {
            
            cout << " " << N -> data << " ";
            PrintHelp(N->next);
        } 
		    
	}
}


template <class T>
bool Queue<T>::IsEmpty()const
{

    if (front == NULL && rear == NULL) 
    {
        return true;
    }
	else 
    {
        return false;
    }
}
template <class T>
void Queue<T>::PrintCursor()const
{
    if(cursorpointer == NULL)
    {
        cout << "Cursor Points to NULL" << endl;
        return;
    }
    else
        cout << cursorpointer -> data;
}	
template <class T>
void Queue<T>::moveLeft()
{

    if(front == NULL)
    {
        cout << "Empty List" << endl;
    }
    else if(cursorpointer == front)
          cursorpointer = rear;
          
       else
       {
          Node<T>* temp = front;
          while(temp->next!=cursorpointer)
            temp = temp->next;
            cursorpointer = temp;
        }
}

template <class T>
void Queue<T>::moveRight()
{
    if(front == NULL)
    {
        cout << "Empty List" << endl;
    }
    else if(cursorpointer -> next == NULL)
       cursorpointer = front;
    else
       cursorpointer = cursorpointer->next;
}
template <class T>
void Queue<T>::moveBegin()
{
    cursorpointer = front;
}
template <class T>
void Queue<T>::moveEnd()
{
    cursorpointer = rear;
}


// OVERLOADED ASSIGNMENT OPERATOR
template <class T>
Queue<T>& Queue<T>::operator=(const Queue<T>& Qu)
{
	
    if(this != &Qu)
    {
       while(front != NULL)
        {
           Node<T>* temp = front; 
           front = front -> next; 
           delete temp;
        }
    }
    if (Qu.front != NULL)
    {
        front = new Node<T>(Qu.front -> data); 
        Node<T>* NTemp = front; 
        Node<T>* temp = Qu.front -> next; 
		
        while (temp != NULL)
        { 
            NTemp -> next = new Node<T>(temp -> data); 
            temp = temp -> next; 
            NTemp = NTemp -> next; 
            cursorpointer = NTemp;
        }  
    }
    else
    {
      front = NULL;
      rear = NULL;
    }

    return *this;
    
}

