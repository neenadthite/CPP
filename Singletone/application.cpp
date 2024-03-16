// Implementation of Singleton Class 
// in C++
#include<iostream>
#include<string>
using namespace std;

class Singleton {
private:

	// member variables
	string sensor;
	int reading;

	static Singleton*

		// static pointer which will points 
		//to the instance of this class
		instancePtr;

	// Default constructor
	Singleton()
	{
	}

public:

	// deleting copy constructor
	Singleton(const Singleton& obj)
		= delete;

	/*
		getInstance() is a static method that returns an
		instance when it is invoked. It returns the same
		instance if it is invoked more than once as an instance
		of Singleton class is already created. It is static
		because we have to invoke this method without any object
		of Singleton class and static method can be invoked
		without object of class

		As constructor is private so we cannot create object of
		Singleton class without a static method as they can be
		called without objects. We have to create an instance of
		this Singleton class by using getInstance() method.
	*/
	static Singleton* getInstance()
	{
		// If there is no instance of class
		// then we can create an instance.
		if (instancePtr == NULL)
		{
			// We can access private members 
			// within the class.
			instancePtr = new Singleton();

			// returning the instance pointer
			return instancePtr;
		}
		else
		{
			// if instancePtr != NULL that means 
			// the class already have an instance. 
			// So, we are returning that instance 
			// and not creating new one.
			return instancePtr;
		}
	}

	// sets values of member variables.
	void setValues(string sensor,
		int reading)
	{
		this->sensor = sensor;
		this->reading = reading;
	}

	// prints values of member variables
	void print()
	{
		cout << sensor << ":" <<
			reading << endl;
	}
};

// initializing instancePtr with NULL
Singleton* Singleton::instancePtr = NULL;

// Driver code
int main()
{
	Singleton* alpha
		= Singleton::getInstance();

	int value=0;

	cout << "Enter the reading of alpha sensor: " << endl;
	cin >> value;

	// setting values of member variables.
	alpha->setValues("alpha_sensor",
		value);

	// printing values of member variables.
	alpha->print();

	cout << "Address of alpha_sensor: " <<
		alpha << "\n" << endl;

	cout << "Enter the reading of Beta sensor: " << endl;
	cin >> value;
	

	Singleton* beta = Singleton::getInstance();

	// setting values of member variables.
	beta->setValues("beta_sensor",
		value);

	// Printing values of member variables.
	beta->print();

	cout << "Address of beta_sensor: " << beta << endl;
	return 0;
}
