#include <iostream>
using namespace std;

int main()
{
	int feet;
	double meters;
	double converter = 0.3;

	cout << "Enter height in feet: ";
	cin >> feet;

	meters = feet * converter;

	cout << endl;

	cout << feet << " feet = " << meters << " meters\n";
}
