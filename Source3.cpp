#include <iostream>

using namespace std;
namespace abc {
	//compute triple of a number
	int triple_number(int number)
	{
		number = number * 3;
		return number;
	}
}

void say_hello(string user_name, int user_age)
{
	cout << "Hello " << user_name << " , your age" << user_age << endl;
}

void greet_user()
{
	string user_name;
	int user_age;
	cout << "What is your name\n";
	cin >> user_name;
	cout << "What is your age\n";
	cin >> user_age;
	cout << "Hello " << user_name << " your age is " << user_age << endl;
}




//print  triple of a number
int print_number(int number)
{
	cout << "The tripple number is " << abc::triple_number(number) << endl;
	return 0;
}

int main()
{
	print_number(29);
	greet_user();
	return 0;
}