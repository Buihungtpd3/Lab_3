#pragma once
#include <string>
#include <iostream>
using namespace std;
class Employee {
private:
	string _Name;
	int _NumDay;
	string _ID;
	string _Position;
public:
	void setName();
	void setDay();
	string getName();
	int getNumDay();
	string getID();
	string getPosition();

};