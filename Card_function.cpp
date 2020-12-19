#include "Card.h"

using namespace std;

void Card::Set_number(string& Number)
{
	this->Number = Number;
}

void Card::Set_pin_code(string& Pin)
{
	this->Pin = Pin;
}

void Card::Set_validity(string& Validity)
{
	this->Validity = Validity;
}

void Card::Set_money(double money)
{
	this->money = money;
}