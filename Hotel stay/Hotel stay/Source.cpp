#include <iostream>
#include <string>
using namespace std;

int daysSpent;
string name;

int main()

{

	double daysStayed    = 0;
	double roomCharge    = 120.00;
	double intrestCharge = 9.99;
	double totalBill;

	cout << "Enter your name please: ";
	cin >> name;
	cout << "Number of days stayed: ";
	cin >> daysStayed;
	cout << "________________________________________________________________________________________________________________________";
	cout << "////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////";
	cout << "************************************************************************************************************************";

	totalBill = roomCharge + (daysStayed * intrestCharge);

	cout << name <<endl;
	cout << "Total bill: " << totalBill << endl;

	system("pause");
	return 0;

}