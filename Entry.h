#pragma once
#include <vector>
#include <fstream>
#include "User.h"
#include "Card.h"

using namespace std;

class Entry
{
	void Entry_card(vector<User>& user);
	void Entry_owner(vector<User>& user);
	ifstream f;
};