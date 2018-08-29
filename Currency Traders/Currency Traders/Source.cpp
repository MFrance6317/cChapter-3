#include <iostream>
#include <string>
using namespace std;

int americanDollars;
double britishPounds = .6318;
double mexicanPesos = 12.8863;
double japaneseYen = 82.34;






int main()

{



	cout << "Input amount: ";
	cin >> americanDollars;
 
	cout << "British Pounds: " << americanDollars * britishPounds << endl;
	cout << "Mexican Pesos: " << americanDollars * mexicanPesos << endl;
	cout << "Japanese Yen: " << americanDollars * japaneseYen << endl;


	system("pause");
	return 0;

}