/*********************************************************************
	Programmer:			Oberon Ilano, Antonio Salgado
	Assignement:		8
	Description:		Linked List Tinkering			
	Due Date:			November 13, 2018
	Course:				CS255 - Computer Science II
**********************************************************************/

double LL::GetAvg()const
{
    Node* curr = head;
    int count = 0;
	double sum = 0.0, avg = 0;
    if (head)
        {
	        while(curr != NULL)
		      	{
		            sum = sum + curr -> data;
		            count++;
		            curr = curr -> next;
		      	}
        }
    return avg =  sum / count; 
}

int LL::GetMax()const
{
	int Max = head -> data; // set max to first data/node
    Node* curr = head;
    if (head)
    	{
		    while (curr != NULL)
		    {
		    	if(curr -> data > Max)
		    	Max = curr -> data;
		    	curr = curr -> next;
		    }
			return Max;
		}
}

int LL::GetMin()const
{
	int Min = head -> data; //set min to first data/node
    Node* curr = head;
    if (head)
    	{
		    while (curr != NULL)
		    {
		    	if(curr -> data < Min)
		    	Min = curr -> data;
		    	curr = curr -> next;
		    }
			return Min;
		}
}

void LL::PrintEvens()const
{
	if (head)
	{
	    Node* curr = head;
		int count = 0;      
	    while(curr != NULL)
	    { 
	    	count++;
	    //	if(count % 2 == 0) // only print even position/node
	        if(curr -> data % 2 == 0) use this instead if even number value of data
	    		cout << curr -> data << endl;
	  		curr = curr -> next;  		 
		}	           
	}
}


int LL::RemoveOdd() //return the count of the Node removed
{
	Node* curr = head;
	Node* temp;
	int count = 0;
	if (head)
	{
		head = head -> next;
		delete curr; //delete the first odd node
		count++; //position 1
		curr = head; //reconnect curr to head
		while(curr != NULL)
			{
				temp = curr -> next;
				curr -> next = temp -> next;
				delete temp;
				curr = curr -> next;
				count++;
			}
		return count;
	}
}
