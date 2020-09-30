#include "std_lib_facilities.h"

int main()

{

string first_name;
string friend_name;
string my_name;
char friend_sex = 0;
int age = 0;

cout << "Enter your name\n";
getline(cin,my_name);

cout << "Enter the name of the person you want to write to\n";
cin >> first_name;

cout << "Enter your friend age\n";
cin >> age;

if (age < 0 || age > 110)
	simple_error("you're kidding!");



cout << "Who is your another friend? \n";
cin >> friend_name;

cout << "If your another friend a Female, type 'f'\nIf your another friend a Male, type 'm'\n"; 


//neme
cin >> friend_sex;
while (friend_sex != 'f' && friend_sex != 'm')
{
cout << "Please,try again and use 'm' or 'f' \n";
cin >> friend_sex;
}

//levél
cout << "Dear " << first_name << ",\n";
cout << "How are you? I'm fine. I miss you.\n";
cout << "Have you seen " << friend_name << " lately?\n";
if (friend_sex == 'f')
cout << "If you see " << friend_name << " please ask her to call me.\n"; 		
else if (friend_sex == 'm')
cout << "If you see " << friend_name << " please ask him to call me.\n";

cout << "I hear you just had a birthday and you are " << age	<< " years old.\n";

//kora
if (age < 12)
	cout << "Next year you will be " << age + 1 << ".\n";
else if (age == 17)
	cout << "Next year you will be able to vote.\n";
else if (age > 70)
	cout << "I hope you are enjoying retirement\n";

cout << "\nYours sincerely,\n\n" << my_name << endl;




	return 0;
}