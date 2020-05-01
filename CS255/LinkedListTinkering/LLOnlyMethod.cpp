/*********************************************************************
	Programmer:			Oberon Ilano
	Assignement:		Linked List Tinkering
	Description:		Delete every other items in the Linked List.				
	Due Date:			November 8, 2018
	Course:				CS255 - Computer Science II
**********************************************************************/

void LL::Tinkering()
{
	Node* curr = head;
	if (head)
	{	       
	    while(curr != NULL)
	    { 
	    	Node* temp = curr -> next;
	        curr -> next = temp -> next; 
	  		delete temp; 
	  		curr = curr -> next;
		}	           
	}
}
