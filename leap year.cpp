#include <iostream>
using namespace std;

int main()
{
	int yr;
	cout << "Enter the year: " << endl;
	cin >> yr;
	
	if(yr % 4 == 0 && yr % 100 != 0 || yr % 400 == 0)
	{
		printf("The year is leap.");
	}
	else
	{
		printf("Year is not leap year.");
	}
}
