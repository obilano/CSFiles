#include "LL.h"

int main(){
    LL list;

    cout << "First pass " << endl;
    list.InsertFront(10);
    list.Print();

    cout << "Second pass " << endl;
    list.InsertFront(15);
    list.Print();

    cout << "Third pass " << endl;
    list.InsertFront(20);
    list.Print();


    
    return 0;
}
