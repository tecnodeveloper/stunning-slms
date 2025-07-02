#include <fstream>
#include <iostream>
#include <string>
// #define Struct_Implementation
#define Class_Implementation
using namespace std;
//
//
class LMS {
public:
  // Setter & Getter functions
  void setName(string name) { Name = name; }
  void setFName(string fname) { fName = fname; }
  void setCNIC(int cnic) { CNIC = cnic; }
  void setEmail(string email) { Email = email; }
  void setPassword(int password) { Password = password; }
  string getName() { return Name; }
  string getFname() { return fName; }
  int getCNIC() { return CNIC; }
  string email() { return Email; }
  int getPassword() { return Password; }

  //
  //
  //
  void NewUser() {
    // Write data
    ofstream data_write;
    data_write.open("NewUser.bin");
    data_write << Name << endl;
    data_write << fName << endl;
    data_write << CNIC << endl;
    data_write << Email << endl;
    data_write << Password << endl;
    data_write.close();

    // Read data
    ifstream data_read;
    data_read.open("NewUser.bin");
    string dummyLine, file_email, file_password_str;
    int file_password;
    while (getline(data_read, dummyLine)) {
      if (getline(data_read, dummyLine))
        if (getline(data_read, dummyLine))
          if (getline(data_read, file_email))
            if (getline(data_read, file_password_str))
              file_password = stoi(file_password_str);
      {
        cout << "\n\nYou have successfully store your information....... ";
      }

      {
      }
    }
  }
  //
  //
  //
  void Sign_In() {
    string signIn_email;
    int signIn_password;

    cout << "\n\n   --------------- SignIn Page -----------------  ";

    cout << "\nEnter your email address: ";
    cin >> signIn_email;
    cin.clear();
    cout << "\nEnter your password: ";
    cin >> signIn_password;
    if (Email == signIn_email && Password == signIn_password) {
      cout << "\nYou have Successfully Login ";
    } else if (signIn_email == "admin" && signIn_password == 12345) {
      cout << "\nYou have Successfully Login as Admin ";
    }
  }

private:
  string Name, fName, Email;
  int CNIC, Password;
};
//
//

int main() {
#ifdef Struct_Implementation
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
#endif
//
//
#ifdef Class_Implementation
  // Making link b/w class
  LMS student_Zain;
  //
  //
  string name, fname, email;
  int CNIC{0}, paswd{0};
  cout << "   --------------- SignUp Page -----------------  ";
  cout << "\nEnter your Full name: ";
  getline(cin, name);
  cout << "\nEnter your Father name: ";
  getline(cin, fname);
  cout << "\nEnter your CNIC number: ";
  cin >> CNIC;
  cin.clear();
  cout << "\nEnter your email address: ";
  cin >> email;
  cin.clear();
  cout << "\nEnter your password: ";
  cin >> paswd;
  cin.clear();
  //
  //
  student_Zain.setName(name);
  student_Zain.setFName(fname);
  student_Zain.setCNIC(CNIC);
  student_Zain.setEmail(email);
  student_Zain.setPassword(paswd);
  //
  //

  student_Zain.NewUser();
  student_Zain.Sign_In();
#endif

  return 0;
}