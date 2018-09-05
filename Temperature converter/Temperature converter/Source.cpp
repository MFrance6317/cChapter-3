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

	int fEightam;
	int fTwelvepm;
	int fFivepm;
	double c;

	cout << "Temperature in Fahrenheit at 8:00 AM: ";
	cin >> fEightam;
	cout << "Temperature in Fahrenheit at 12:00 PM: ";
	cin >> fTwelvepm;
	cout << "Temperature in Fahrenheit at 5:00 PM: ";
	cin >> fFivepm;

	//actual (F to C) conversion rate is - 32 * 5 / 9 (- 32 / by 1.8 works too)

	cout << "___________________________________________" << endl;

	c = convert(fEightam);
	cout << "Temperature in Celsius at 8:00 AM: " << c << endl;
	c = convert(fTwelvepm);
	cout << "Temeprature in Celsius at 12:00 PM: " << c << endl;
	c = convert(fFivepm);
	cout << "Temperature in Celsius at 5:00 PM: " <<c << endl;


	system("pause");
	return 0;

}