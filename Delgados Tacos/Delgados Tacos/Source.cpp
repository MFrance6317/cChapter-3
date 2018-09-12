#include <iostream>
using namespace std;

int main()
{

	int tacos = 0;
	int burritos = 0;
	int nachos = 0;
	int churros = 0;
	int quesadillas = 0;
	int menuChoice;
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
	cout << "                     " << endl;
	cout << "Please pick an item from the menu!" << endl;
	cout << "1.Tacos $1.50 2.Burritos $1.50 3.Nachos $1.25 4.Churros $.75 5.Quesadillas $1.50" << endl;
	cin >> menuChoice;

	if (menuChoice == 1){
		cout << "How many tacos would you like? ";
		cin >> tacos;
	}
	else if (menuChoice == 2){
		cout << "How many burritos would you like? ";
		cin >> burritos;
	}
	else if (menuChoice == 3){
		cout << "How many nachos would you like? ";
		cin >> nachos;
	}
	else if (menuChoice == 4){
		cout << "How many churros would you like? ";
		cin >> churros;
	}
	else if (menuChoice == 5){
		cout << "How many quesadillas would you like? ";
		cin >> quesadillas;
	}

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