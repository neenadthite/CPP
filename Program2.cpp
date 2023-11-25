#include<iostream>
using namespace std;

int main()
{
	int number;
	char ch = 'a';
	
	cout << "Enter number (in decimal): " << endl;
	cin >> dec >> number;
	cout << "Given number: " << number << endl;
	cout << "Number in decimal: " << dec << number << "\t";
	cout << "Number in octal: " << oct << number << "\t";
	cout << "Number in hex: " << hex << number << endl;

	cout << "Enter number (in octal): " << endl;
        cin >> oct >> number;
        cout << "Given number: " << number << endl; 
        cout << "Number in decimal: " << dec << number << "\t";
        cout << "Number in octal: " << oct << number << "\t";
        cout << "Number in hex: " << hex << number << endl;

	cout << "Enter number (in hex): " << endl;
        cin >> hex >> number;
        cout << "Given number: " << number << endl; 
        cout << "Number in decimal: " << dec << number << "\t";
        cout << "Number in octal: " << oct << number << "\t";
        cout << "Number in hex: " << hex << number << endl;

	cout << "Dec of 'a': " << dec << int(ch) << endl;
	cout << "Oct of 'a': " << oct << int(ch) << endl;
	cout << "Hex of 'a': " << hex << int(ch) << endl;

	number = 0123;
	cout << " Number taken is : 0123"  << endl; 
	cout << " decimal: " << dec << number << "\t octal: " << oct << number << "\t hexadecimal: " << hex << number << endl;

	number = 0x123;
	cout << " Number taken is : 0x123" << endl;
        cout << " decimal: " << dec << number << "\t octal: " << oct << number << "\t hexadecimal: " << hex << number << endl;
	return 0;
}
