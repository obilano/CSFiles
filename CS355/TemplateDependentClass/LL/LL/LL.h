#include <iostream>
using namespace std;

#ifndef _LL_H
#define _LL_H

class Node{
    int data;
    Node* next;
    Node(int d);
    Node(int d, Node* n);
    friend class LL;
};

class LL{
    Node* head;
public:
    LL();
    //copy constructor, assignment operator, destructor  to handle deep copying and destroying of data
    bool InsertFront(int e);
    void Print()const;    
};


#endif
