#include <iostream>
#include <vector>

using namespace std;
int get_max_value_from_number_list(vector<int> number_list)
{
	int max = 0;
	for (int number : number_list)
	{
		if (number > max) {
			max = number;
		}
	}
	return max;
}


int main() {
	vector<int> number_list;

	bool ask_user_for_numbers = true;

	while (ask_user_for_numbers) {
		int input_number;
		cout << "Enter a number (0 to stop)";
		cin >> input_number;
		if (input_number == 0)
			ask_user_for_numbers = false;
		else
			number_list.push_back(input_number);
	}

#if 0
	for (int i = 0; i < 5; i++)
	{
		int  input_number;
		cout << "Enter a number: ";
		cin >> input_number;
		number_list.push_back(input_number);
	}

#endif
	cout << "Max value form number list: " << get_max_value_from_number_list(number_list) << endl;
	return 0;
}