#include <iostream>
#include"adminpannel.h"
#include"studentpannel.h"
using namespace std;

int main()
{
    int input{ 0 };
    cout << " ------------------------------------------------------------------------------------------------------- " << endl;
    cout << " ------------------------------------------------------------------------------------------------------- " << endl;
    cout << " -------------------------------- Welcome to Learning Management System -------------------------------- " << endl;
    cout << " ------------------------------------------------------------------------------------------------------- " << endl;
    cout << " ------------------------------------------------------------------------------------------------------- " << endl;
    cout << "Press 1 for Admin pannel: "<<endl;
    cout << "Press 2 for Student pannel: " << endl;
    if (input == 1)
    {
        adminpannel adminobj;
    }
    else
    {
        studentpannel studentobj;
    }
    return 0;
}