#include "Entry.h"


using namespace std;

 void Entry::Entry_card(vector<Card> &card)
 {
	 string line;
	 f.open("Card_database");
	 while (!f.eof())
	 {
		 Card n;
		 f >> line;
		 n.Set_number(line);
		 f >> line;
		 n.Set_cipher(line);
		 f >> line;
		 n.Set_pin_code(line);
		 f >> line;
		 n.Set_validity(line);
		 f >> line;
		 n.Set_cvv(line);
		 card.push_back(n);
	 }
	 f.close();
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
		 user.push_back(n);
	 }
	 f.close();
}