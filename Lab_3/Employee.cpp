#include "Employee.h"

void Employee::setName()
{
	cout << "Enter name: ";
	string name; getline(cin, name);
	_Name = name;
}
void Employee::setDay()
{
	cout << "Enter day: ";
	int day; cin >> day;
	_NumDay = day;
}
