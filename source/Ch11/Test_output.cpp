#include "std_lib_facilities.h"

int main()
{
	// 1-4 feladat
	int birth_year = 2000;
	
	cout << birth_year << "\t(decimal)\n"
		<< hex << birth_year << "\t(hexadecimal)\n"
		<< oct << birth_year << "\t(octal)\n";

	// 5-7 feladat
	cout << noshowbase << dec << endl;
	int age = 20;
	cout << age << "\t(decimal)\n"
		<< hex << age << "\t(hexadecimal)\n"
		<< oct << age << "\t(octal)\n\n";


	// 8 feladat
	int a,b,c,d;
	cout << "Type 4 integer" << endl;
	// első számot hexadecimálisként olvassuk, másodikat octalként, harmadik negyedik pedig sima decimális
	cin >> a >> hex >> b >> oct >> c >> d;
	cout << a << '\t' << b << '\t' << c << '\t' << d << endl << endl;
	// kimenetet visszaállítjuk decimálisra
	cout<<noshowbase<<dec;


	// 9 feladat
	float number = 1234567.89;

	cout << defaultfloat << number << "\t(defaultfloat)\n"
		<< fixed << number << "\t(fixed)\n"
		<< scientific << number << "\t(scientific)\n" << endl;



	// 10 feladat
	// táblázat fejléc
	cout<<'|'<<setw(10)<<"Lastname"
		<<'|'<<setw(11)<<"Firstname"
		<<'|'<<setw(12)<<"Phone number"
		<<'|'<<setw(30)<<"E-mail"<<"|\n";
	// táblázat tartalom
	cout<<'|'<<setw(10)<<"Dobos"
		<<'|'<<setw(11)<<"Balazs"
		<<'|'<<setw(12)<<"06306345321"
		<<'|'<<setw(30)<<"Dobos.Balazs@ext.telekom.hu"<<"|\n";
	cout<<'|'<<setw(10)<<"Papp"
		<<'|'<<setw(11)<<"Daniel"
		<<'|'<<setw(12)<<"06301165238"
		<<'|'<<setw(30)<<"pappdaniel@blacktrap.com"<<"|\n";
	cout<<'|'<<setw(10)<<"Varga"
		<<'|'<<setw(11)<<"Szabolcs"
		<<'|'<<setw(12)<<"06302654321"
		<<'|'<<setw(30)<<"szabicica@dollar.us"<<"|\n";
	cout<<'|'<<setw(10)<<"Gal"
		<<'|'<<setw(11)<<"Dora"
		<<'|'<<setw(12)<<"06904126485"
		<<'|'<<setw(30)<<"galdora@redlamp.nl"<<"|\n";
	cout<<'|'<<setw(10)<<"Dobos"
		<<'|'<<setw(11)<<"Zoltan"
		<<'|'<<setw(12)<<"06209843954"
		<<'|'<<setw(30)<<"dobos.zoltan@t-systems.com"<<"|\n";
	cout<<'|'<<setw(10)<<"Nagy"
		<<'|'<<setw(11)<<"Evelin"
		<<'|'<<setw(12)<<"06205645465"
		<<'|'<<setw(30)<<"nagyevelin@t-systems.com"<<"|\n";


	return 0;
}