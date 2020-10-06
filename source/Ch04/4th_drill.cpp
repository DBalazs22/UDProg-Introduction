#include "std_lib_facilities.h"





int main()
{

cout << "Kérem adjon meg számokat!\n(Amennyiben tovább szeretne lépni, írjon be egy 0-t)\n"; 

vector<double> numbers;

for (double number; cin >> number && number != 0;)
	numbers.push_back(number);

sort(numbers);


for(auto number : numbers)
	cout << number << endl;

cout << "A legkisseb szám amit láttam: " << numbers [0] << endl;

int utolso = 0;
utolso = numbers.size() - 1;


cout << "A legnagyobb szám amit láttam: " << numbers [utolso] << endl;



cout << "Kérem adjon meg egy számot és egy mértékegységet (cm,m,in,ft): \n";
vector<double> hosszok;
string unit;
double unit_szam = 0;
double hossz_meter = 0;
double cm_to_inch = 2.54;
double inch_to_feet = 12;
double cm_to_meter = 0.01;
double inch_to_meter = 0.0254;
double feet_to_meter = 0.3048;
double sum = 0;
while(cin >> unit_szam >> unit)
{
	if(isnan(unit_szam)); 
	{	
	 	if(unit == "cm"){
		hossz_meter = unit_szam*cm_to_meter;	
		hosszok.push_back(hossz_meter);	
		sum = sum + hossz_meter;
		}
		else if (unit == "m"){
		hossz_meter = unit_szam;	
		hosszok.push_back(hossz_meter);	
		sum = sum + hossz_meter;	
		}
		else if (unit == "ft"){
		hossz_meter = unit_szam*feet_to_meter;	
		hosszok.push_back(hossz_meter);	
		sum = sum + hossz_meter;	
		}
		else if (unit == "in"){
		hossz_meter = unit_szam *inch_to_meter;	
		hosszok.push_back(hossz_meter);
		sum = sum + hossz_meter;
			
		}
		else {
			cout << "Helytelen mértékegység!\n";
		}
	}
	sort(hosszok);
}
cout << "A legkisseb érték: " << hosszok[0] << " m\n";
cout << "A legnagyobb érték: " << hosszok[hosszok.size()-1] << " m\n";
cout << hosszok.size() << " db értéket adtál meg.\n";
cout << "A hosszúságok összege: " << sum << " m\n";
	
for(auto hossz_meter : hosszok)
cout << hossz_meter << " m\n";


	return 0;
}





/*
1-5. feladatig



int main()
{

double elso_szam = 0;
double masodik_szam = 0;
double differencial = 0;

cout << "Kérem adjon meg két számot!\n"; 





while (cin >> elso_szam >> masodik_szam)
{
	if(isnan(elso_szam || masodik_szam)) break;
	cout << "Az első szám: " << elso_szam << "\n" <<
	"A második szám: " << masodik_szam << "\n" << endl;
	break;
}


differencial = masodik_szam - elso_szam;
//cout << differencial << endl;
if (elso_szam < masodik_szam)
	cout << "A kisebb érték: " << elso_szam << "\nA nagyobb érték: " << masodik_szam << "\n";

if (differencial <= 0.01 )
	cout << "A számok majdnem egyenlőek.\n";


return 0;

}

*/
