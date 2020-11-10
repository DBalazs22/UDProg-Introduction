#include "my.h"
#include <iostream>


int foo;
int x = 7;
int y = 9;
double dx = 7.7;
double dy = 9.9;
const auto cx = 7;
const auto cy = 9;
double xx = x;
double yy = y;


int main()
{

	foo = 7;
	print_foo();
	print1(99);	
	swap_r(x,y);
	swap_v(7,9);
	print2(x,y);
	swap_double_r(dx,dy);
	swap_double_v(7.7,9.9);
	printd(dx,dy);
	swap_cr(cx,cy);
	swap_v(7.7,9.9);
	printd(cx,cy);
	

	return 0;

}

