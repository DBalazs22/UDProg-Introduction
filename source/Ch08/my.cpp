#include "my.h"
#include "std_lib_facilities.h"



void print_foo()
{

	cout << foo << endl;

}

void print1(int i )
{

	cout << i << endl;
}



void print2(int i , int y)
{

	cout << i << " " << y << endl;
}

void printd(double i, double y)
{

	cout << i << " " << y << endl;
}


void swap_v(int a,int b)
{
	int temp;
	temp = a;
	a=b;
	b=temp;
}

void swap_r(int& a,int& b)
{
	int temp;
	temp = a;
	a=b;
	b=temp;
}

void swap_double_v(double a, double b)
{
	double temp;
	temp = a;
	a=b;
	b=temp;	
}


void swap_double_r(double& a,double& b)
{
	double temp;
	temp = a;
	a=b;
	b=temp;
}


vector<double> cons;
int c;
int d;
//konstansot nem tudunk megcserélni nem adja vissza a megfelelő értéket.
void swap_cr(const int& a = c, const int& b = d)
{
		
		cons.push_back(a);
		cons.push_back(b);
		c = cons[0];
		d = cons[1];


}




