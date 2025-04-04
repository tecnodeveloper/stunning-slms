using namespace std;
class studentpannel {
private:
	string fName;
	string lName;
	string fatherName
		int cnic;
		int age;
public:
	string firstName;
	string lastName;
	string fatherName;
	int cnic;
	int age;
	studentpannel( int input )
	{
		cout << "Please select only one option: \n 1 for SignIn \n 2 for SignUp";
		cin >> input;
	}

	string signUp() {

		cout << "Please enter your first name: " << endl;
		cin >> firstName;
		cout << "Please enter your last name: " << endl;
		cin >> lastName;
		cout << "Please enter your father name: " << endl;
		cin >> FatherName;
	}

	void setFirstName(string firstName)
	{
		fName = firstName;

	}
	void setFirstName(string lastName)
	{
		fName = lastName;

	}
	void setFirstName(string FatherName)
	{
		fatherName = FatherName;

	}


};
