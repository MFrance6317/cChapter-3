#include <iostream>
using namespace std;

double convert(double f)
{
	
	double c;
	c = (f - 32) / 1.8;

	return c;
}

int main()
{

	double c;
	double tempArray[5] = { 0.0 };
	
	for (int i = 0; i < size(tempArray); i++) {

		cout << "Enter a temperature: ";
		cin >> tempArray[i];
		c = convert(tempArray[i]);
		cout << "The temperature is: " << c << endl;
	}

	system("pause");
	return 0;
}