#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
  string fullname, fatherName, email;
  int cnicId, passd;
  cout << "    ----------SignUp Page----------      ";
  cout << "\nEnter your Full Name: ";
  getline(cin, fullname);
  cout << "\nEnter you father Name: ";
  getline(cin, fatherName);
  cout << "\nEnter your CNIC Id: ";
  cin >> cnicId;
  cin.ignore();
  cout << "\nEnter your Email address: ";
  cin >> email;
  cin.ignore();
  cout << "\nEnter your password: ";
  cin >> passd;
  cin.ignore();

  //   Writting data in file ==> Userdata.bin
  ofstream data_write;
  data_write.open("Userdata.bin");
  data_write << fullname << endl;
  data_write << fatherName << endl;
  data_write << cnicId << endl;
  data_write << email << endl;
  data_write << passd << endl;
  data_write.close();

  //   SignIn page
  string admin_Name = "admin";
  int admin_passd = 12345, s_password;

  cout << "Enter you email address" << endl;
  cin >> email;
  cout << "Enter you password" << endl;
  cin >> s_password;
  if (email == admin_Name && s_password == admin_passd) {
    cout << "..............Admin Succesfull Login.............." << endl;

  } else {

    ifstream data_read;
    data_read.open("Userdata.bin");

    string file_email, file_password_string, dummy_line;

    cout << "..............SignIn Page.............." << endl;
    while (getline(data_read, dummy_line)) {
      if (getline(data_read, dummy_line))
        if (getline(data_read, dummy_line))
          if (getline(data_read, file_email))
            if (getline(data_read, file_password_string)) {
              int file_password =
                  stoi(file_password_string); // convert string to int using
                                              // function string to int
              if (email == file_email && passd == file_password) {

                cout << "\n\nYou have successfully logged in as user" << endl;
                cout << "Your Id is...." << endl;

                break;
              }
            }
    }
  }

  return 0;
}