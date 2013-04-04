#include <iostream>
using namespace std;

int main()
{
	int number1;
	float number2, add, sub, mul, div;

	cout << "number 1 :";
	cin >> number1;
	cout << "number 2 :";
	cin >> number2;

	
	add = number1 + number2;
	sub = number1 - number2;
	mul = number1 * number2;
	div = number1 / number2;

	cout << '\n';	
	cout <<"adding :" <<add<<endl;
	cout <<"subtraction :" <<sub<<endl;
	cout <<"multiplication :" <<mul<<endl;
	cout <<"division :" <<div<<endl;
	cout << '\n';
}
