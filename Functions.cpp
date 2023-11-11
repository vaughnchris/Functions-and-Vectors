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



// Main function
int main()
{
	int a = 10, b=20;
	cout << return_something() << endl;
	cout << change_cpy(a, b) << endl;
	cout << a << " " << b << endl;
	cout << change_ref(a, b) << endl;
	cout << a << " " << b << endl;

	return 0;
}
