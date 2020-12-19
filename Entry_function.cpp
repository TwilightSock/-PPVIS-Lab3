#include "Entry.h"


using namespace std;

 void Entry::Entry_card(vector<User>& user)
 {
	
 }

 void Entry::Entry_owner(vector<User>& user)
 {
	 string line;
	 f.open("User_database");
	 while (!f.eof())
	 {
		 User n;
		 Name name;
		 f >> line;
		 name.first = line;
		 f >> line;
		 name.second = line;
		 n.Set_name(&name);
		 f >> line;
		 n.Set_age(line);
	 }
	 f.close();
}