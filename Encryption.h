#pragma once

#include "Entry.h"
#include <string>

using namespace std;

string decryption(string str)
	{
			for (int i = 0; i < str.length(); i++) {
				if (str[i] == 'Z')
				{
					str[i] = 'A';
				}
				else if (str[i]== '`')
				{
					str[i] = ' ';
				}
				else str[i]--;
			}
			return str;
	}

void user_check(vector<User> user, vector<Card> card)
{
	
}
/*
string encryption(string str)
	{
		for (int i = 0; i < str.length(); i++) {
			if (str[i] == 'Z')
			{
				str[i] = 'A';
			}
			else if (str[i] == ' ')
			{
				str[i] = '`';
			}
			else str[i]++;
		}
		return str;
	}
	*/