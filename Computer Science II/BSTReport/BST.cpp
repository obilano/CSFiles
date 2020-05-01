/**********************************************************************
	Programmer:			Oberon Ilano
	Author(s):       	Dr. Janet Jenkins, Oberon Ilano	
	Project:			Experiment and Report Binary Search Trees (BST)
	Description:		This program wil allow users experiment
						and determine what is the relationship of the
                        to the number of nodes					
	Due Date:			December 4, 2018
	Course:				CS255 - Computer Science II
***********************************************************************
NOTE: Everything in this code was from class work except the following
      function, PrintMxHeight, PrintMaxHeightHelper,BSTMaxHeight,
      and MaxHeightHelper.
**********************************************************************/
#include <iostream>
using namespace std;

class BNode{
    int data;
    BNode* left;
    BNode* right;
    //Constructors
    BNode();
    BNode(int d, BNode* l, BNode* r);
    friend class BST;
};
//***************************************************************
//BNode Constructors
//***************************************************************
BNode::BNode(): left(NULL), right(NULL){}
BNode::BNode(int d, BNode* l, BNode* r):data(d), left(l), right(r){}

class BST{
    BNode* root;
    //Helper function
    bool InsertHelper(BNode*& subroot, int item);
    void PrintInOrderHelper(ostream& os, BNode* subroot)const;
    void PrintPreOrderHelper(ostream& os, BNode* subroot)const;
    void PrintPostOrderHelper(ostream& os, BNode* subroot)const; 
    int CountItemsHelper(BNode* subroot)const;
    void PrintMaxHeightHelper(BNode* subroot);
    int MaxHeightHelper(BNode* subroot);
public:
    //Constructors
    BST();
    bool Insert(int item);
    //bool Remove(int item); //not being used
    //BNode* Find(int item) const; // not being used
    //Functions
    void PrintInOrder(ostream& os)const;
    void PrintPreOrder(ostream& os)const;
    void PrintPostOrder(ostream& os)const;
    int CountItems()const;
    int BSTMaxHeight();
    void PrintMaxHeight();
};
//***************************************************************
//BST Constructors
//***************************************************************
BST::BST(): root(NULL){}
//***************************************************************
//class definition/ implementation
//***************************************************************
//Insert BST nodes
bool BST::Insert(int item){
     return InsertHelper(root, item);//actual parameter
}
//Helper for Insert function
bool BST::InsertHelper(BNode*& subroot, int item){// former parameter
    if(subroot == NULL){
       subroot = new BNode(item, NULL, NULL);
       return subroot;
    }
    else if(item < subroot -> data)
        return InsertHelper(subroot -> left, item);
    else if (item > subroot -> data)
         return InsertHelper(subroot -> right, item);
    else{
         cout << "NO DUPLICATES FOR YOU!!!" << endl;
         return false;
    }
}

//bool BST::Remove(int item){} //not being used
//BNode* BST::Find(int item) const{} // not being used

//***************************************************************
//BST printer in different sequences
//***************************************************************
//Print BST in Pre Order Form
void BST::PrintPreOrder(ostream& os)const{
    PrintPreOrderHelper(os, root);
}
//helper function for PrintPreOrder 
void BST::PrintPreOrderHelper(ostream& os, BNode* subroot)const{
    if(subroot != NULL){
    	os << subroot -> data << "\t";
        PrintPreOrderHelper(os, subroot -> left);
        PrintPreOrderHelper(os, subroot -> right);
    }
}
//Print BST in Post Order Form
void BST::PrintPostOrder(ostream& os)const{
     PrintPostOrderHelper(os, root);
}
//helper function for PrintPostOrder
void BST::PrintPostOrderHelper(ostream& os, BNode* subroot)const{
     if(subroot != NULL){         
          PrintPostOrderHelper(os, subroot->left);          
          PrintPostOrderHelper(os, subroot->right);
          os << subroot->data << "\t";
     }
}
//Print BST In Order Form
void BST::PrintInOrder(ostream& os) const{
     PrintInOrderHelper(os, root);
}
//helper function for PrintInOrder
void BST::PrintInOrderHelper(ostream& os, BNode* subroot)const{
     if(subroot != NULL){
          PrintInOrderHelper(os, subroot->left);
          os << subroot->data << "\t";
          PrintInOrderHelper(os, subroot->right);
     }
}

int BST::CountItems()const{
    return CountItemsHelper(root);
}
//helper function for CountItems
int BST::CountItemsHelper(BNode* subroot)const{
    if(subroot){
        return 1 + CountItemsHelper(subroot -> left) + 
        CountItemsHelper(subroot -> right);
    }
    else
        return 0;
}
/*************************************************
#Function Definition#
Name:			BSTMaxHeight
Purpose:		Used to find longest/deepest height 
                between left and right
Incoming:		None
Outgoing:		None
Return:			MAxHeightHelper
***************************************************/
int BST::BSTMaxHeight(){
	return MaxHeightHelper(root);
}
/*************************************************
#Function Definition#
Name:			MaxHeightHelper
Purpose:		helper function for BSTMaxHeight
Incoming:		subroot(BNode)
Outgoing:		None
Return:			number of BST Height (int)
***************************************************/
int BST::MaxHeightHelper(BNode* subroot){
	if(subroot){
		return 1 + max(MaxHeightHelper(subroot->left), 
        MaxHeightHelper(subroot->right));
	}
	else
		return 0;
}
/*************************************************
#Function Definition#
Name:			PrintMAxHeight
Purpose:		Print BST nodes that related to the
                path of the height from the root
                node to the longest leaf node
Incoming:		None
Outgoing:		None
Return:		    Node
***************************************************/
void BST::PrintMaxHeight(){
	PrintMaxHeightHelper(root);
}
/*************************************************
#Function Definition#
Name:			PrintMaxHeightHelper
Purpose:		helper function for PrintMaxHeight
Incoming:		subroot(BNode)
Outgoing:		data, items(int)
Return:			None
***************************************************/
//print max height helper
void BST::PrintMaxHeightHelper(BNode* subroot){
	if(subroot){
		if(MaxHeightHelper(subroot -> left) > MaxHeightHelper(subroot -> right))
			PrintMaxHeightHelper(subroot -> left);
		else
			PrintMaxHeightHelper(subroot -> right);
	}
	else
		return; cout << subroot -> data << "\t" << ' ';
}

int main(){
    BST b1;
    int count = 0, height = 0;
    
    // figure 4
    b1.Insert(14);
    b1.Insert(8);
    b1.Insert(12);
    b1.Insert(0);
    b1.Insert(27);
    b1.Insert(31);
    b1.Insert(10);
    b1.Insert(-1);
    b1.Insert(17);
    b1.Insert(16);
    b1.Insert(19);
    b1.Insert(3);
    b1.Insert(87);
    b1.Insert(30);
    b1.Insert(13);
    
    // figure 3
    /*b1.Insert(14);
    b1.Insert(27);
    b1.Insert(17);
    b1.Insert(19);
    b1.Insert(31);
    b1.Insert(1);
    b1.Insert(4);
    b1.Insert(30);
    b1.Insert(16);
    b1.Insert(87);
    b1.Insert(0);
    b1.Insert(143);
    b1.Insert(-1);*/
    
	// figure 2
	/*b1.Insert(-1);
    b1.Insert(0);
    b1.Insert(1);
    b1.Insert(4);
    b1.Insert(10);*/
   	
    // figure 1
    /*b1.Insert(143);
    b1.Insert(91);
    b1.Insert(87);
    b1.Insert(31);
    b1.Insert(30);*/
    
    // figure 1 when inserted in a random sequence
    /*b1.Insert(87);
    b1.Insert(30);
    b1.Insert(143);
    b1.Insert(91);
    b1.Insert(31);*/
	
   
    cout << "In Order" << endl;
    b1.PrintInOrder(cout); cout << endl;
    cout << "Pre Order" << endl;
    b1.PrintPreOrder(cout); cout << endl;
    cout << "Post Order" << endl;
    b1.PrintPostOrder(cout); cout << endl << endl;
    count = b1.CountItems(); 
	cout << "Count of Nodes" << endl; cout << count << endl << endl;
	height = b1.BSTMaxHeight()-1; //subtract the root that has a height of 0
    cout << "BST Height" << endl; cout << height << endl << endl;
    cout << "Height path from the longest leaf node to the root node"
         << " of the BST" << endl;
    b1.PrintMaxHeight(); cout << endl;
    
    return 0;
}

