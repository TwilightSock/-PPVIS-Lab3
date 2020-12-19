#pragma once

#include <iostream>

using namespace std;

class Card
{
	string Number;
	string Pin;
	string Validity;
	string Cvv;
	double money;
public:
	void Set_number(string& Number);
	void Set_pin_code(string& Pin);
	void Set_validity(string& Validity);
	void Set_money(double money);
};