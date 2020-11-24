#include "std_lib_facilities.h"

ostream& print_array(ostream& os, int* a, int n)
{
	for (int i=0; i<n; i++)
	cout << a[i] << endl;
return os;
}

ostream& print_vector(ostream& os, vector<int>a)
{
	for (int i=0; i < a.size(); i++)
	cout << a[i] << endl;
return os;
}


int main()
{
	cout << "1-2.feladat\n";
	int x = 7;
	int* p1 = &x;
	cout << "p1 value = " << p1 << "; p1 int points: " << *p1 << endl;


	cout << "3-4.feladat\n";

	int* p2 = new int[7] {1,2,4,8,16,32,64};
	cout << "p2 value = " << p2 << ";\n";
	cout << "p2 int points:" << endl;
	print_array(cout,p2,7);

	cout << "5.feladat\n";

	int* p3 = p2;
	cout << "p3 value = " << p3 << ";\n";
	cout << "p3 int points:" << endl;
	print_array(cout,p3,7);	


	cout << "6-8.feladat\n";
	p2 = p1;
	p2 = p3;

	cout << "p1 value = " << p1 << "; p1 int points: " << *p1 << endl;
	cout << "p2 value = " << p2 << "; p2 int points: " << *p2 << endl;

	delete[] p2;
	
	cout << "10-12.feladat\n";

	p1 = new int[10] {1,2,4,8,16,32,64,128,256,512};
	p2 = new int[10];
	for (int i=0; i<10; i++)
		p2[i] = p1[i];

	print_array(cout,p2,10);

	cout << "13.feladat\n";

	vector<int>v1 {1,2,4,8,16,32,64,128,256,512};
	vector<int>v2(10);
	v2 = v1;
	print_vector(cout,v1);
	print_vector(cout,v2);




return 0;






}