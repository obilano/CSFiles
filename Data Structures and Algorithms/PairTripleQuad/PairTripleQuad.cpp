/*************************************************************************
	Programmer:		    Oberon Ilano
	Author(s):       	Dr. Janet Jenkins, Oberon Ilano	
	Assignment:			4 - Pair, Triple, Quad
	Description:		Creating Quad to make a 4 dimensions and test it
                        with a clean menu.
	Due Date:			February 5, 2019
	Course:				CS355 - Data Structures and Algorithms
*************************************************************************/
/*1.  What happens when you do this?
Pair* p1 = new Pair();
p1->Print();
### Pair default is being called and the result is <0,0>. ###

2. What happens when you do this?
Pair* p2 = new Triple();
p2->Print();
### Triple called Pair default and the result is <0,0>. ###

3.  What happens when you do this?
Pair* p3 = new Quad();
p3->Print();
### Quad is calling triple then the triple is calling the Pair default 
	and the result is <0,0>. ### 

4.  What happens when you do this?
Pair* p4 = new Quad();
p4->Set(1,2,3,4);
### It did not work because the Pair Set(int, int) only have 
         two arguements but Quad is providing 4 arguments.
         It works when I changed Pair* to Quad* then
         set p4 with (1,2,3,4) and it would print <1,2,3,4>. ###  */

#include <iostream>
using namespace std;

class Pair{
//****************************************
//         Pair Class Header
//***************************************  
//protected:                             
    int x;
    int y;
public:
    Pair();
    Pair(int v1, int v2);
    void SetX(int v);
    void SetY(int v);
    void Set(int v1, int v2);
    int GetX()const;
    int GetY()const;
    void Print()const;
    void Menu()const;

};
//****************************************
//         Pair Class Definition
//***************************************      
Pair::Pair():x(0), y(0){
     cout << "Pair Default" << endl;
}

Pair::Pair(int v1, int v2): x(v1), y(v2){
     cout << "Pair data" << endl;
}

void Pair::SetX(int v){
     x = v;
}

void Pair::SetY(int v){
     y = v;
}

void Pair::Set(int v1, int v2){
     x = v1;
     y = v2;
}

int Pair::GetX()const{
    return x;
}

int Pair::GetY()const{
    return y;
}

void Pair::Print()const{
     cout << "<" << x << "," << y << ">";
}
//****************************************
//         Triple Class Header
//***************************************     
class Triple : public Pair{
    int z;
public:
       Triple();
       Triple(int v1, int v2, int v3);
       void SetZ(int v);
       int GetZ()const;
       void Set(int v1, int v2, int v3);
       void Print()const;
};

//****************************************
//       Triple Class Definition
//***************************************  
Triple::Triple(): z(0){

   cout << "Triple Default" << endl;
}

Triple::Triple(int v1, int v2, int v3): Pair(v1, v2), z(v3){
   cout << "Triple Data " << endl;
}

void Triple::SetZ(int v){
     z = v;
}

int Triple::GetZ()const{
    return z;
}

void Triple::Set(int v1, int v2, int v3){
     Pair::Set(v1, v2); //inhereted from a parent
     z = v3;

}

void Triple::Print()const{
     //Pair::Print();
     cout << "<" << GetX() <<  "," << GetY() << "," << z << ">";
} 


//****************************************
//         Quad Class Header
//***************************************     
class Quad : public Triple{
    int a;
public:
       Quad();
       Quad(int v1, int v2, int v3, int v4);
       void SetA(int v);
       int GetA()const;
       void Set(int v1, int v2, int v3, int v4);
       void Print()const;
};

//****************************************
//       Quad Class Definition
//***************************************  
Quad::Quad(): a(0){

   cout << "Quad Default" << endl;
}

Quad::Quad(int v1, int v2, int v3, int v4): Triple(v1, v2, v3), a(v4){
   cout << "Quad Data " << endl;
}

void Quad::SetA(int v){
     a = v;
}

int Quad::GetA()const{
    return a;
}

void Quad::Set(int v1, int v2, int v3, int v4){
     Triple::Set(v1, v2, v3); //inhereted from a parent/triple
     a = v4;

}

void Quad::Print()const{
     //Pair::Print();
     cout << "<" << GetX() <<  "," << GetY() << "," << GetZ() 
          << "," << a << ">";
} 

void Pair::Menu()const{
    Pair* p1;
    Pair* p2;
    //Triple* p2; //prints <0,0,0>
    Pair* p3;
    //Quad* p3; // prints <0,0,0,0>
    //Pair* p4; //did not work because Pair has 2 arguement 
                // but it's providing 4 arugments
    Quad* p4;
    Quad* p5;
    int choice;
     cout << " Main Menu" << endl
     << " 1. Pair " << endl
     << " 2. Triple " << endl
     << " 3. Quad " << endl
     << " 4. Quad: Set (1,2,3,4) " << endl
     << " 5. Test Quad: Set (2,4,6,8) " << endl
     << " 0. Quit " << endl;
     do
	{		
	cin >> choice;			
	switch (choice)
		{		
		case 0: cout << "Choice: " << choice << endl
				     << "Quit Program" << endl << endl;
				exit(1); // quit
				break;	
		case 1:	cout << "Choice: " << choice << endl; 
        		p1 = new Pair();	
				p1 -> Print(); cout << endl << endl;	
				break;
		case 2: cout << "Choice: " << choice << endl; 
                p2 = new Triple();
				p2 -> Print(); cout << endl << endl;
				break;
		case 3: cout << "Choice: " << choice << endl;
				p3 = new Quad();
				p3 -> Print(); cout << endl << endl;
				break;
	    case 4: cout << "Choice: " << choice << endl; 
				p4 = new Quad();
		    	p4 -> Set(1,2,3,4);
                cout << "\np4 -> Set(1,2,3,4) does not work because "<<endl
                 << "Quad has 4 arguments and Pair has 2. "<<endl
                 << "In order to make Set(1,2,3,4) work, is to change "<<endl
                 << "Pair* p4 to Quad* p4."<<endl <<endl; 
				break;
		case 5: cout << "Choice: " << choice << endl;
				p5 = new Quad();
				p5 -> Set(2,4,6,8);
				p5 -> Print(); cout << endl << endl;
		break;
		default: cout << "Choice: " << choice << endl;
				 cout << "Invalid Choice." 
				"Please enter valid number 1, 2, 3, 4, 5, or 0: ";
	       		 cout << endl;
                break;
		}	
	}while (choice != 0);
}

int main(){
    Pair* p;
    //Triple* t;
    //t -> Menu();
    p -> Menu();
	   
 return 0;
}

