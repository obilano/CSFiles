#include "LL.h"
//Node implementation
Node::Node(int d):data(d), next(NULL){}
Node::Node(int d, Node* n):data(d), next(n){}

//Linked List Implementation
LL::LL():head(NULL){}

bool LL::InsertFront(int e){
    head = new Node(e, head);
    return head;
}

void LL::Print()const{
     Node* curr = head;
     while (curr != NULL){
           cout << curr-> data << endl;
           curr = curr->next;
     }
}


