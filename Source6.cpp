#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<double> temperature_list = { 12.3, -4.5, 15.0, 11,7, -0.4 };
	for (int i = 0; i < temperature_list.size(); i ++) {
		cout << temperature_list.at(i) << endl;
	}

	for (int i = 0; i < temperature_list.size(); i++) {
		double temperature = temperature_list.at(i);
		cout << temperature << endl;
		if (temperature < 0.0) {
			cout << "It's freezing!" << endl;
		}
	}

	for (double temperature : temperature_list) {
		cout << temperature << endl;
	}
	return 0;
}