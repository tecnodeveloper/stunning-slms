#include<iostream>
#include<string>
#include <fstream>
using namespace std;
int main()
{
    int num{0}, rollno,passd{0};
    string Fullname,email;

    cout<<"Welcome to learning management System \n";
    cout<<"Press 1 for sign up or 2 for login: \n";
    cin>>num;
    if (num == 1)
    {
        cin.ignore();
        cout<<"Enter your fullname: "<<endl;
        getline(cin, Fullname);
        cout<<"Enter your rollno:"<<endl;
        cin>>rollno;
        cout<<"Enter your email address: "<<endl;
        cin>>email;
        cout<<"Create password: ";
        cin>>passd;
        ifstream a_file ("filename.txt");
        cout<<Fullname<<endl;
        cout<<rollno<<endl;
        cout<<email<<endl;

    }
    else if (num == 2) {

    }
    else {
        cout<<"The numbers is't correct please choose 1 or 2";
    }
    return 0;
}