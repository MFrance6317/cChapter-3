#include <iostream>
using namespace std;

int main()
{

	double bagelT;
	double doughnutT;
	double coffeeT;
	double totalCost;
	int bagelAmount;
	int doughnutAmount;
	int cupCoffee;


	cout << "How many bagels: ";
	cin >> bagelAmount;
	cout << "How many doughnuts: ";
	cin >> doughnutAmount;
	cout << "How many cups of coffee: ";
	cin >> cupCoffee;

	bagelT = bagelAmount * .99;
	doughnutT = doughnutAmount * .75;
	coffeeT = cupCoffee * 1.20;
	totalCost = bagelT + doughnutT + coffeeT;

	cout << "Your total order is: " << totalCost << endl;

	system("pause");
	return 0;
}