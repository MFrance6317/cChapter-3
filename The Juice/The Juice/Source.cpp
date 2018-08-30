// page 91
// Author Michael France
// Date 08/30/2018

#include <iostream>
using namespace std;

int main()

{

	double totalBill     = 0.0;
	double liqour        = 0.0;
	double tipPercent    = 0.0;
	double totalNoLiquor = 0.0;
	double tip           = 0.0;

	cout << "Enter the total bill: ";
	cin >> totalBill;
	cout << "Enter the liquor charge: ";
	cin >> liqour;
	cout << "Enter the tip percentage in decimal format: ";
	cin >> tipPercent;

	totalNoLiquor = totalBill - liqour;
	tip = totalNoLiquor * tipPercent;

	cout << "Tip $" << tip << endl;

	system("pause");
	return 0;

}