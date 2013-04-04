#include <iostream>
using namespace std;

int main()
{
	char name[10];
	char addr[20];
	
	cin >> name;
	cin >> addr;
	cin.sync();
	cin.clear();
	cout << "name :" << name<<endl;
	cout << "address :" << addr<<endl;
	cin.get();
	return 0;
}

