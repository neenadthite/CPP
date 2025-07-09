#include <iostream>

int main()
{
	std::string user_name;
	int user_age;
	std::cout << "What is your name\n";
	std::cin >> user_name;
	std::cout << "What is your age\n";
	std::cin >> user_age;
	std::cout << "Hello " << user_name << " your age is " << user_age << std::endl;
}