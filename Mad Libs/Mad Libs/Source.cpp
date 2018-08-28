#include <iostream>
#include <string>

using namespace std;


string color;
string WordEndingInEst;
string BodyPartPlural;
string AnAnimal;
string ANoun;
string PluralNoun;

int a;
int b;
int c;

int main()

{

	cout << "Pick a Number: ";
	cin >> a;
	cout << "Pick Another Number: ";
	cin >> b;
	c = a - b;

	cout << "Pick a Color: "; 
	cin >> color;
	cout << "Pick A Word Ending In Est: ";
	cin >> WordEndingInEst;
	cout << "A Plural Body Part: ";
	cin >> BodyPartPlural;
	cout << "Pick An Animal: ";
	cin >> AnAnimal;
	cout << "Pick An Noun: ";
	cin >> ANoun;
	cout << "Pick a Plural Noun: ";
	cin >> PluralNoun;

	cout << "The " << color << " dragon is the " << WordEndingInEst << " dragon of all. It has " << c << " " << BodyPartPlural << ", and a "
		<< AnAnimal << " shaped like a " << ANoun << ". It loves to eat " << PluralNoun << ", although it will feast on nearly anything." << endl;

	system ("Pause");
	return 0;

}