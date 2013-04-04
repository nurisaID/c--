/*#include <stdio.h>*/
#include <iostream>
using namespace std;
int main(void)
{
	int workDay;
	float totalSalary, workHours, payRate, weeklyPay, overTimeRate, percentOverTime;

	workDay = 5;
	workHours = 7.5;
	payRate = 22.5;
	percentOverTime = 0.3;

	weeklyPay = workDay * workHours * payRate;
	overTimeRate = percentOverTime * weeklyPay;
	totalSalary = weeklyPay + overTimeRate;

	cout << "work day " <<workDay<<endl;
	cout << "work hours " <<workHours<<endl;
	cout << "weekly pay " <<weeklyPay<<endl;
	cout << "over Time " <<overTimeRate<<endl;
	cout << "total " <<totalSalary<<endl;
	cout << '\n';
	return 0;
}
