using namespace std;
class studentpannel {
private:
	string fName;
	string lName;
	string fatherName;
		int cnic;
		int age;
	string FatherName;
		int studentCNIC;
		int Studentage;
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
	if (input == 2)
	{
		signUp();
	}
	void signUp() {
		cout << "Please enter your first name: " << endl;
		cin >> firstName;
		cout << "Please enter your last name: " << endl;
		cin >> lastName;
		cout << "Please enter your father name: " << endl;
		cin >> FatherName;
		cout << "Please enter your CNIC No: " << endl;
		cin >> cnic;
		cout << "Please enter your Age: " << endl;
		cin >> age;
	}
	string getFirstName()
	{
		return firstName;
	}
	string getLastName()
	{
		return firstName;
	}
	string getFirstName()
	{
		return firstName;
	}


	void setFirstName(string firstName)
	{
		fName = firstName;
	}
	void setLastName(string lastName)
	{
		lName = lastName;
	}
	void setFatherName(string FatherName)
	{
		FatherName = fatherName;
	}
	void setCnic(int cnic)
	{
		studentCNIC = cnic;
	}
	void setAge(int age)
	{
		Studentage = age;
	}



	string getFirstName()
	{
		return firstName;
	}
	string getLastName()
	{
		return lastName;
	}
	string getFirstName()
	{
		return FatherName;
	}
	int getCnic()
	{
		return cnic;
	}
	int getAge()
	{
		return age;
	}

};
