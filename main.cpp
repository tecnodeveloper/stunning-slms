#include<iostream>
#include<string>
using namespace std;
int main()
{
    int num{0};
    string Fullname;
    int rollno;
    string email;

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

        // cin>>Fullname;
        cout<<Fullname<<endl;
        cout<<rollno<<endl;
        cout<<email<<endl;
    }
    return 0;
}