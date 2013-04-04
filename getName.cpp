#include <iostream>
using namespace std;

int main()
{
	char name[100];
	cin >> name;
	cin.sync();
	cin.clear();
	cout << "hello, " << name<<endl;
	cin.get();
	return 0;
}
