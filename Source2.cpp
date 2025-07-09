#include<iostream>

void say_hello(std::string user_name, int user_age)
{
	std::cout << "Hello " << user_name << " , your age" << user_age << std::endl;
}


//compute triple of a number
int triple_number(int number)
{
	number = number * 3;
	return number;
}


//print  triple of a number
int print_number(int number)
{
	std::cout << "The tripple number is " << triple_number(number) <<std::endl;
	return 0;
}

int main()
{
	print_number(4);
	say_hello("Ninad", 29);
	return 0;
}