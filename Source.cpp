#include <iostream>
#include "User.h"

using namespace std;

int main()
{
	Name name;
	name.first = "Vyacheslav";
	name.second = "Gordienko";
	User user;
	user.Set_name(&name);
	user.Set_age("3");
}