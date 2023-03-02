#include <iostream>
using namespace std;

int main()
{
	int yr;
	cout << "Enter the year: " << endl;
	cin >> yr;
	
	if(yr % 4 == 0 && yr % 100 != 0 || yr % 400 == 0)
	{
		cout << "This year is leap year." << endl;
	}
	else
	{
		cout << "This year is not leap year" << endl;
	}
}
