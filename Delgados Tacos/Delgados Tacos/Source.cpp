#include <iostream>
using namespace std;

int main()
{

	int tacos;
	int burritos;
	int nachos;
	int churros;
	int quesadillas;
	double tacoAmount;
	double burritoAmount;
	double nachoAmount;
	double churroAmount;
	double quesadillaAmount;
	double totalCost;

	cout << " ________________________________" << endl;
	cout << " |      DELGADO'S    TACOS      |" << endl;
	cout << " |______________________________|_" << endl;
	cout << " |   |      / \\           |    |  \\ " << endl;
	cout << " |   |      \\ /           |    |   \\ " << endl;
	cout << " |   |      /|\\           |    |    \\ " << endl;
	cout << " |   |_______|____________|    |___/_\\______" << endl;
	cout << " |   |____________________|    |    - |     |" << endl;
	cout << "_|_____________________________|      |____ |" << endl;
	cout << "||_/    \\______________________|______/    \\|" << endl;
	cout << "   | ## |                             | ## | " << endl;
	cout << "   \\____/                             \\____/ " << endl; 

	cout << "How many tacos would you like? ";
	cin >> tacos;
	cout << "How many burritos would you like? ";
	cin >> burritos;
	cout << "How many nachos would you like? ";
	cin >> nachos;
	cout << "How many churros would you like? ";
	cin >> churros;
	cout << "How many quesadillas would you like? ";
	cin >> quesadillas;

	tacoAmount = tacos * 1.50;
	burritoAmount = burritos * 1.50;
	nachoAmount = nachos * 1.25;
	churroAmount = churros * .75;
	quesadillaAmount = quesadillas * 1.50;
	totalCost = tacoAmount + burritoAmount + nachoAmount + churroAmount + quesadillaAmount;

	cout << "Your total cost is: " << totalCost << endl;

	system("pause");
	return 0;
}