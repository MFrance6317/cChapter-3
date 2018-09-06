#include <iostream>
using namespace std;

int main()
{

	double checkValue;
	double checkAmount;
	double percentGross;
	double totalDeposit;
	double actualPercent;

	cout << "Value of paycheck: ";
	cin >> checkValue;
	cout << "What percent would you like to deposit?: ";
	cin >> percentGross;

	checkAmount = checkValue * 24;
	actualPercent = percentGross / 100;
	totalDeposit = (checkAmount * actualPercent) + 100;

	cout << "Total deposit value: " << totalDeposit << endl;

	system("pause");
	return 0;
}