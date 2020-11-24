#include "std_lib_facilities.h"

ostream& print_vector(ostream& os, vector<int>a)
{
	for (int i=0; i < a.size(); i++)
	cout << a[i] << endl;
return os;
}

/////////////////////////////////////////////////////

ostream& print_array10(ostream& os, int* a)
{
	for (int i=0; i<10; i++)
	cout << a[i] << endl;
return os;
}


ostream& print_array_hundreds(ostream& os, int* a, int b)
{
	for (int i=0; i<b; i++)
	cout << a[i] << endl;
	return os;
}

ostream& print_array_hundreds11(ostream& os, int* a, int b)
{
	for (int i=0; i<b; i++)
	cout << a[i] << endl;
	return os;
}
ostream& print_array_hundreds20(ostream& os, int* a, int b)
{
	for (int i=0; i<b; i++)
	cout << a[i] << endl;
	return os;
}

int main()
{

cout << "1-3. Feladat\n";
int* ten = new int[10];
for (int i=0; i<10; i++)
	cout << ten[i] << endl;




cout << "4-5. Feladat\n";

int* hundreds = new int[10];
int hundreds_help = 100;
for (int i=0; i<10; i++)
{
	hundreds[i] = hundreds_help;
	++hundreds_help;
}
print_array_hundreds(cout, hundreds,10);

cout << "6. Feladat\n";

int* hundreds11 = new int[11];
int hundreds_help11 = 100;
for (int i=0; i<11; i++)
{
	hundreds11[i] = hundreds_help11;
	++hundreds_help11;
}
print_array_hundreds11(cout, hundreds11,11);

cout << "8. Feladat\n";

int* hundreds20 = new int[20];
int hundreds_help20 = 100;
for (int i=0; i<20; i++)
{
	hundreds20[i] = hundreds_help20;
	++hundreds_help20;
}
print_array_hundreds20(cout, hundreds20,20);

cout << "10.1 Feladat\n";

vector<int>ten1_1(10);
int ten1_1_help = 100;
for (int i = 0; i < ten1_1.size(); i++)
{
	ten1_1[i] = ten1_1_help;
	++ten1_1_help;
 
}

print_vector(cout,ten1_1);


cout << "10.2 Feladat\n";

vector<int>ten1_2(11);
int ten1_2_help = 100;
for (int i = 0; i < ten1_2.size(); i++)
{
	ten1_2[i] = ten1_2_help;
	++ten1_2_help;
 
}

print_vector(cout,ten1_2);


cout << "10.3 Feladat\n";

vector<int>ten1_3(20);
int ten1_3_help = 100;
for (int i = 0; i < ten1_3.size(); i++)
{
	ten1_3[i] = ten1_3_help;
	++ten1_3_help;
 
}

print_vector(cout,ten1_3);

/////9.Feladat////

delete[] ten;
delete[] hundreds;
delete[] hundreds11;
delete[] hundreds20;


////////////////


return 0;

}






