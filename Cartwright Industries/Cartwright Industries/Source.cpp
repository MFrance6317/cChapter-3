#include <iostream>
using namespace std;

int main()
{

	double weeklyGross;
	double fwt;
	double fica;
	double stateIncome;
	double netPay;

	cout << "Please insert employee's weekly gross pay: ";
	cin >> weeklyGross;

	fwt = weeklyGross * .20;
	fica = weeklyGross * .08;
	stateIncome = weeklyGross * .04;
	netPay = fwt + fica + stateIncome;

	cout << "Total weekly net pay is: " << netPay << endl;


	system("pause");
	return 0;
}