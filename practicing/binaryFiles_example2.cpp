#include <iostream>
#include <fstream>
using namespace std;

struct Automobil {
	string ime;
	int godiste;
};

//int main() {
//	ofstream fout;
//	fout.open("automobili.dat", ios::binary);
//	if (fout.fail())
//	{
//		cout << "datoteku nije moguce otvoriti." << endl;
//	}
//	
//	Automobil automobili;
//	char unos;
//	int brojac = 1;
//	do
//	{
//		cout << "unesite ime za " << brojac << ". automobil: ";
//		cin >> automobili.ime;
//		cout << "unesite godiste za " << brojac << ". automobil: ";
//		cin >> automobili.godiste;
//		fout.write((char *)&automobili, sizeof(automobili));
//		cout << "zelite li ponovno unijeti automobil? d/n: ";
//		cin >> unos;
//		brojac += 1;
//	} while (unos == 'd');
//	fout.close();
//
//	ifstream fin;
//	fin.open("automobili.dat", ios::binary);
//	if (fin.fail())
//	{
//		cout << "nije moguce otvoriti datoteku. " << endl;
//	}
//	
//	fin.read((char*)&automobili, sizeof(automobili));
//	while (!fin.eof())
//	{
//		cout << "ime automobila je: " << automobili.ime << endl;
//		cout << "godiste automobila je: " << automobili.godiste << endl;
//		fin.read((char*)&automobili, sizeof(automobili));
//	}
//	fin.close();
//	return 0;
//}