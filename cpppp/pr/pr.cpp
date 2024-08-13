#include <iostream>
#include <ccolor.h>

const int inch_per_foot = 12;
const double cm_per_inch = 2.54;

void inch_to_foot(void)
{
	using namespace std;
	int inch;

	cout << "Enter you height of inches:_\n";
	cin >> inch;

	if (inch <= 0)
	{
		cout << "wrong input!\n";
		exit(-1);
	}
	cout << GREEN "Your height is: " RED<< inch / inch_per_foot << NOCOLOR " feet"
		<< " and " RED << inch % inch_per_foot << NOCOLOR " inches.\n";
}

int main()
{
	inch_to_foot();

	return 0;
}
