#include <iostream>
#include <math.h>
using namespace std;

double calculatepi(int n)
{
	double pisum = 0.0;
	for (int i = 1; i <= n; i++)
	{
		pisum = pisum + pow(-1.0, (double)(i - 1)) * 1.0 / (2.0 * i - 1.0);
	}
	return 4.0 * pisum;
}
int main()
{
	int n;
	double pi;
	cout << "Enter a value to approximate Pi Value: ";
	cin >> n;
	pi = calculatepi(n);
	cout << "The Pi Approximation is: " << pi << endl;
	system("pause");
}
/*
Enter a value to approximate Pi Value: 1000
The Pi Approximation is: 3.14059
Press any key to continue . . .
*/