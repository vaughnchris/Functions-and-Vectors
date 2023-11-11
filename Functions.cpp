#include <iostream>

using namespace std;
// Function declaration
//return_type function_name( parameter list );
string return_something()
{
	return "Hello World";
}
// Function definition
//prameters are local variables
//copy of the value is passed
int change_cpy(int c, int d)
{
	c += 10;
	d += 10;
	return c + d;
}
// Function declaration
//takes reference of the variable
//changes the value of the variable
int change_ref(int& c, int& d)
{
	c += 10;
	d += 10;
	return c + d;
}

// Function declaration
//takes a default value
//if no value is passed, default value is used
//default values are always at the end
int change_def(int c, int d = 10)
{
	return c + d;
}

// Function declaration
//overloading
//same function name with different parameters
//return type is not considered
int change_def(int c, double d = 10)
{
	return c + d;
}

// Main function
int main()
{
	int a = 10, b=20;
	double c = 10.2;
	//Print the value returned by the function
	cout << return_something() << endl;
	//Print the value returned by the function
	cout << change_cpy(a, b) << endl;
	//Print the value of a and b after the function call
	cout << a << " " << b << endl;
	//Print the value returned by the function
	cout << change_ref(a, b) << endl;
	//Print the value of a and b after the function call
	cout << a << " " << b << endl;
	//Print the value returned by the function
	//Default value is used for d
	cout << change_def(a, c) << endl;

	return 0;
}
