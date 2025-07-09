#include <iostream>

using namespace std;

int main()
{
	cout << boolalpha;
	cout << true << endl;
	cout << false << endl;
	cout << (1 == 2) << endl;
	cout << (1 != 2) << endl;
	cout << (1 <= 1) << endl;
	cout << ("hello" == "hello") << endl;
	cout << (( 1 == 1 ) && (3 == 4)) << endl;

	double temperature = 25.0;
	cout << ((temperature >= 20.0) && (temperature < 30.0)) << endl;
	return 0;
}