#include <iostream>
using namespace std;

int fibonacci (int n)
{
	if(n<3)
		return 1;
		
	else
		return fibonacci (n-2) + fibonacci (n-1);
}

int main()
{
	int n;
	
	cout << "Which number of the fibonacci sequence: " << endl;
	cin >> n;
	cout << fibonacci(n) << endl;
}
