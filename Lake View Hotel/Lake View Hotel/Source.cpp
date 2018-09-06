#include <iostream>

using namespace std;

int main()

{

	int roomCharge;
	int nightsStayed;
	int phoneTime;
	double totalBill;
	double phoneCharge;

	cout << "How many nights did you stay? ";
	cin >> nightsStayed;
	cout << "Minutes spent on the phone: ";
	cin >> phoneTime;

	roomCharge  = nightsStayed * 100;
	phoneCharge = phoneTime * .25;
	totalBill   = phoneCharge + roomCharge;

	cout << "*************************************" << endl;

	cout << "Your total bill is: " << totalBill << endl;

	system("pause");
	return 0;
}