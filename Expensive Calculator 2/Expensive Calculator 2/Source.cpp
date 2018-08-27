#include <iostream>
#include <string>
using namespace std;

int main()

{

	string nameString;

	int firstNum;
	int secondNum;
	int add;
	int subtract;
	int multiply;
	int divide;
	int remainder;

	cout << " What Is Your Name? ";
	cin >> nameString;

	cout << " Please Enter Your First Number ";
	cin >> firstNum;

	cout << " Please Enter Your Second Number ";
	cin >> secondNum;

	add = firstNum + secondNum;
	subtract = firstNum - secondNum;
	multiply = firstNum * secondNum;
	divide = firstNum / secondNum;
	remainder = firstNum % secondNum;

	cout << " The Sum Of " << firstNum << " And " << secondNum << " = " << add << endl;
	cout << " The Difference Of " << firstNum << " And " << secondNum << " = " << subtract << endl;
	cout << " The Product Of " << firstNum << " And " << secondNum << " = " << multiply << endl;
	cout << " The Quotient Of " << firstNum << " And " << secondNum << " = " << divide << endl;
	cout << " The Remainder Of " << firstNum << " And " << secondNum << " = " << remainder << endl;


	system(" pause ");

	return 0;

}