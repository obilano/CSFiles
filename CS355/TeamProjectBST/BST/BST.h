/*****************************************************************************/
//
//           GROUP:: Holden, Oberon, Antonio, and Darian
//           CLASS::  CS - 355
//           ASSIGNMENT::  Project #4 - BST Manipulation
//           DATE::  03/21/2019
//           DESCRIPTION::  Templated BST class that uses a dynamic linked 
//							structure for representation. It contains 
//							different methods that navigate throughout the BST.
//
/******************************************************************************/

#ifndef _BST_H
#define _BST_H

#include <iostream>
#include <fstream> //read from file

using namespace std;

template <class T>
class BST;
//***************************************************************************
//      BNODE CLASS DECLARATION
//***************************************************************************
template <class T>
class BNode
{
	T data;
	BNode<T>* left;   //left subtree
	BNode<T>* right;  // right subtree
	
	BNode(T d);
	BNode(T d, BNode<T>* l, BNode<T>* r);
	friend class BST<T>;
};
//***************************************************************************
//     BST CLASS DECLARATION
//***************************************************************************
template <class T>
class BST
{
    BNode<T>* cursorpointer;
	BNode<T>* root;
	
	BNode<T>* SearchHelper(BNode<T>* b, int item)const;
	BNode<T>* DeleteHelper(BNode<T> *& b, int e);
	BNode<T>* Copy(BNode<T>* src) const;
	
	void PrintPostOrderHelper(BNode<T>* b)const;
	void PrintPreOrderHelper(BNode<T>* b)const;
	void PrintInOrderHelper(BNode<T>* b)const;
	bool InsertHelper(BNode<T>*& b, T e); 
	void empty(BNode<T>* &src); 
	

public:
	BST();
	~BST();
	BST(const BNode<T> &B1);
//***************************************************************************
//     MUTATORS
//***************************************************************************
	bool Insert();
	bool Delete();
//***************************************************************************
//    ACCESSORS
//***************************************************************************
	void PrintInOrder()const;
	void PrintPreOrder()const;
	void PrintPostOrder()const;
	void PrintCursor()const;
	BNode<T>* Search()const;
	BNode<T>* FindMin(BNode<T>*& b);
	
	void moveLeft();
	void moveRight();
	void moveBegin();
	void moveEnd();
    void DestroyRecursive(BNode<T>* node);
    void BuildDataSet();


//***************************************************************************
//OVERLOAD
//***************************************************************************
	BST& operator=(const BNode<T>& B1); 
};

#endif

template <class T>
BNode<T>::BNode(T d):data(d),left(NULL), right(NULL) {}
template <class T>
BNode<T>::BNode(T d, BNode<T>* l, BNode<T>* r):data(d), left(l), right(r){}

//***************************************************************************
//BST Implementation
//***************************************************************************
template <class T>
BST<T>::BST(): cursorpointer(NULL), root(NULL){}
//***************************************************************************
////DESTRUCTOR DEFINITON
//***************************************************************************
template <class T>
BST<T>::~BST() 
{
    empty(root); 
}
//***************************************************************************
//COPY CONSTRUCTOR DEFINITON
//***************************************************************************
template <class T>
BST<T>::BST(const BNode<T> &B1) 
{
	BNode<T> b;
	root = Copy(B1.root);
	b.cursorpointer = B1.cursorpointer; 
}
//***************************************************************************
//PRIVATE FUNCTIONS AND HELPERS DEFINITIONS
//***************************************************************************
//***************************************************************************
//PRINT POST ORDER HELPER
//***************************************************************************
template <class T>
void BST<T>::PrintPostOrderHelper(BNode<T>* b)const
{
    if(b != NULL){
		PrintInOrderHelper(b->left);
		PrintInOrderHelper(b->right);
		
		if(b != NULL){

		if(b==cursorpointer)
			cout << "[" << b->data << "]\t";
		else
			cout << b->data << "\t";
	  }
   }
}
//***************************************************************************
//PRINT PRE ORDER HELPER
//***************************************************************************
template <class T>
void BST<T>::PrintPreOrderHelper(BNode<T>* b)const
{
	if(b != NULL){

		if(b==cursorpointer)
			cout << "[" << b->data << "]\t";
		else
			cout << b->data << "\t";
				
		PrintInOrderHelper(b->left);
		PrintInOrderHelper(b->right);
		
	}
}
//***************************************************************************
//PRINT IN ORDER HELPER
//***************************************************************************
template <class T>
void BST<T>::PrintInOrderHelper(BNode<T>* b)const
{
	if(b != NULL){

		PrintInOrderHelper(b->left);
		if(b==cursorpointer)
			cout << "[" << b->data << "]\t";
		else
			cout << b->data << "\t";
		
		PrintInOrderHelper(b->right);
		
	}
}
//***************************************************************************
//INSERT HELPER DEFINITIONS
//***************************************************************************
template <class T>
bool BST<T>::InsertHelper(BNode<T>*& b, T e)
{
	if (b == NULL)
	{
		b = new BNode<T>(e);
		cursorpointer = b;
		return b;	
	}
	else if (e < b->data)
	{
	    cursorpointer = b;
		return InsertHelper(b->left, e);	
	}
	else if (e > b->data)
	{
	    cursorpointer = b;
		return InsertHelper(b->right, e);
	}
	else
	{
		cout << "No DUPLICATES" << endl;
		return false;
	}
}	
//***************************************************************************
//SERCH HELPER DEFINITIONS
//***************************************************************************
template <class T>
BNode<T>* BST<T>::SearchHelper(BNode<T> *b, int item)const
{
	if (b != NULL)
	{
		if (b->data == item)
        {
            cout << "Found: " << item << endl;
			return b;
        }

		else if (item < b->data)
			return SearchHelper(b->left, item);
		else
			return SearchHelper(b->right, item);	
	}
	else
		return NULL;
}
//***************************************************************************
//DELETE HELPER DEFINITIONS
//***************************************************************************
template <class T>
BNode<T>* BST<T>::DeleteHelper(BNode<T>*& b, int e)
{
    if(b == NULL)
    {
        return b;
    }
    
    else if(e < b->data)
    {
        b->left = DeleteHelper(b->left, e);
    }
    
    else if(e > b->data)
    {
        b->right = DeleteHelper(b->right, e);
    }
    else
    {
    
        if(b->left == NULL && b->right == NULL) 
        {
    		delete b;
    		b = NULL;
    	}
    
    		//Case 2: One child 
    
    	else if(b->left == NULL) 
        {
            BNode<T> *temp = b;
            b = b->right;
        	delete temp;
        }
    
    	else if(b->right == NULL) 
        {
    		BNode<T> *temp = b;
    		b = b->left;
    		delete temp;
        }
    
    		// case 3: 2 children
        else
        { 
            BNode<T> *temp = FindMin(root->right);
            b->data = temp->data;
            b->right = DeleteHelper(b->right,temp->data);
    	}
    
    }

	return b;
}
//***************************************************************************
//COPY HELPER DEFINITION
//***************************************************************************
template <class T>
BNode<T>* BST<T>::Copy(BNode<T>* src) const
{ 
	if(src == NULL)
		return NULL;
	BNode<T>* rootCopy = new BNode<T>();
	rootCopy -> data = src -> data;
	rootCopy -> left = Copy(src -> left);
	rootCopy -> right = Copy(src -> right);
	return rootCopy;
}
//***************************************************************************
//DESTRUCTOR HELPER DEFINITION
//***************************************************************************
template <class T>
void BST<T>::empty(BNode<T>* &src)
{ 
	if(src != NULL)
    {
		empty(src -> left);
		empty(src -> right);
		delete src;
	}
	src = NULL;
    cursorpointer = NULL;
}
//***************************************************************************
//MUTATORS DEFINITIONS
//***************************************************************************
template <class T>
bool BST<T>::Insert()
{
    T e;
    cin >> e;
	return InsertHelper(root, e);
}
template <class T>
bool BST<T>::Delete()
{
    T e;
    cin >> e;
    return DeleteHelper(root, e);
}

//***************************************************************************
//ACCESSORS DEFINITIONS
//***************************************************************************
//***************************************************************************
//PRINT IN ORDER
//***************************************************************************
template <class T>
void BST<T>::PrintInOrder()const
{
    cout << "[";   
    PrintInOrderHelper(root);
	cout << "]" << endl;
}
//***************************************************************************
//PRINT PRE ORDER
//***************************************************************************
template <class T>
void BST<T>::PrintPreOrder()const
{
    cout << "[";
	PrintPreOrderHelper(root);
    cout << "]" << endl;
}
//***************************************************************************
//PRINT POST ORDER
//***************************************************************************
template <class T>
void BST<T>::PrintPostOrder()const
{
    cout << "[";
    PrintPostOrderHelper(root);
    cout << "]" << endl;
}
//***************************************************************************
//SEARCH
//***************************************************************************
template <class T>
BNode<T>* BST<T>::Search()const
{
    T item;
    cin >> item;
	return SearchHelper(root, item);
}
//***************************************************************************
//MOVE LEFT
//***************************************************************************
template <class T>
void BST<T>::moveLeft()
{
	if(root == NULL)
	{
		cout << "Empty Tree" << endl;
	}
    else if(cursorpointer-> left == NULL)
       cursorpointer = root;
    else
       cursorpointer = cursorpointer-> left;
}
//***************************************************************************
//MOVE RIGHT
//***************************************************************************
template <class T>
void BST<T>::moveRight()
{
	if(root == NULL)
	{
		cout << "Empty Tree" << endl;
	}
    else if(cursorpointer-> right == NULL)
       cursorpointer = root;
    else
       cursorpointer = cursorpointer-> right;
}
//***************************************************************************
//MOVE CURSOR TO BEGINNING
//***************************************************************************
template <class T>
void BST<T>::moveBegin()
{
	if(root == NULL)
	{
		cout << "Empty Tree" << endl;
	}
	else if(root != NULL)
    {
		if(cursorpointer -> right != NULL || cursorpointer -> right == NULL)
        {   
            cursorpointer = root;
		    while(cursorpointer -> left != NULL)
			    cursorpointer = cursorpointer -> left;	
		}
	}
	else
		cursorpointer = root;
}
template <class T>

//***************************************************************************
//MOVE CURSOR TO END
//***************************************************************************
void BST<T>::moveEnd()
{  
	if(root == NULL)
	{
		cout << "Empty Tree" << endl;
	}
	else if(root != NULL)
    {
		if(cursorpointer -> left != NULL || cursorpointer -> left == NULL)
        {   
            cursorpointer = root;
		    while(cursorpointer -> right != NULL)
			    cursorpointer = cursorpointer -> right;	
		}
	}
	else
		cursorpointer = root;		
}
//***************************************************************************
//PRINT CURSOR
//***************************************************************************
template <class T>
void BST<T>::PrintCursor()const
{

    if(cursorpointer == NULL)
    {
        cout << "Cursor Points to NULL" << endl;
        return;
    }
    else
        cout << cursorpointer -> data;
}
//***************************************************************************
//FIND THE MINUMUM, DELETE HELPER
//***************************************************************************
template <class T>
BNode<T>* BST<T>::FindMin(BNode<T>*& b)
{

    if(b == NULL)
    {
        return NULL;
    }
    
    else 
    {
        while(b->left != NULL) 
    	{
    	    b = b->left;
        }
    }

	return b;

}
//***************************************************************************
////FSTREAM FUNCTION FOR BUILD LARGE DATA SET FROM FILE
//***************************************************************************
template <class T>
void BST<T>::BuildDataSet()
{    
    empty(root); //delete current BST
    T e;
    ifstream infile("text.txt"); 
    if(infile.fail()){ 
        cout << "Cannot be open " << endl;
        int main(); // back to main menu
    }      
    while (infile >> e){
        InsertHelper(root, e);             
    }
    infile.close();

}
//***************************************************************************
//OVERLOAD
//ASSIGNMENT OPERATOR DEFINITION
//***************************************************************************
template <class T>
BST<T>& BST<T>::operator=(const BNode<T>& B1)
{
	BNode<T> b;
	empty(root); 
	root = Copy(B1.root);
	b.cursorpointer = B1.cursorpointer;
	return *this; 
} 



