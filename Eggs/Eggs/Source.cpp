#include <iostream>

using namespace std;

int eggAmount;
int dozenEgg;
int lonelyEggs;
int cartonCost;
double eggCost;
double totalAmount;

int main()
{

	cout << "How many eggs would you like? ";
	cin >> eggAmount;

	dozenEgg = eggAmount / 12;
	lonelyEggs = eggAmount % 12;
	cartonCost = dozenEgg * 2.00;
	eggCost = lonelyEggs * .25;
	totalAmount = cartonCost + eggCost;

	cout << "__________________________________________" << endl;

	cout << "Cartons of eggs: " << dozenEgg << endl;
	cout << "Eggs remaining: " << lonelyEggs << endl;
	cout << "Your total cost is: " << totalAmount << endl;

	system ("pause");
	return 0;
}