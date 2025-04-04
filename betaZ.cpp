#include <iostream>

int main()
{
	std::string username;
	std::string password;
	std::cout << "Enter your username: ";
	std::cin >> username;
	std::cout << "Enter your password: ";
	std::cin >> password;
	if (username == "admin" && password == "admin")
	{
		std::cout << "Login successful!" << std::endl;
		return 0;
	}
	else
	{
		std::cout << "Login failed!" << std::endl;
		return 1;
	}

}
