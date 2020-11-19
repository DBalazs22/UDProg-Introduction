#include "std_lib_facilities.h"


class Date{
private:
	int year, month, day;
public:	
	class Invalid {};
	Date(int y, int m, int d): year(y), month(m), day(d) { if(!is_valid()) throw Invalid{}; }
	bool is_valid();
	void add_day(int n); 
	int get_year() { return year;}
	int get_month() { return month;}
	int get_day(){ return day;}
};

bool Date::is_valid()
{

if(year < 1) return false;
	if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) 
		if(day < 1 || day > 31)return false;
 	if(month == 4 | month == 6 | month == 9 | month == 11)
		if(day < 1 || day > 30) return false;		
	if(month == 2)
		if(day < 1 || day > 28) return false;

return true;
};

void Date::add_day(int n)
{
	day += n;
	switch(month)
	{
		case 1: case 3: case 5: case 7:
		case 8: case 10: case 12:

			if (day > 31)
			{
				month++;
				day -= 31;
				if (month > 12)
				{
					year++;
					month -= 12;
				}
			}
			break;
		default:
		break;
	}
	switch(month)
	{
		case 4:  case 6: 
		case 9:  case 11:
	
			if (day > 30)
			{
				month++;
				day -= 30;
				if (month > 12)
				{
					year++;
					month -= 12;
				}
			}			
			break;
		default:
		break;
	}
	switch(month)
	{
		case 2:  	
			if (day > 28)
			{
				month++;
				day -= 28;
				if (month > 12)
				{
					year++;
					month -= 12;
				}
			}
			break;
		default:
		break;
	}
}

int main()
try{
	Date today{1975, 02, 28};
	cout << "Date today: " << today.get_year() << '.' << today.get_month() << '.' << today.get_day() << endl;
	Date tomorrow {today};
	tomorrow.add_day(1);
	cout << "Date tomorrow: " << tomorrow.get_year() << '.' << tomorrow.get_month() << '.' << tomorrow.get_day() << endl;

return 0;
}catch (Date::Invalid){
	cout << "Invalid date\n";
	return 1;
}
catch (exception& e){
	cout << e.what() << endl;
	return 1;
}