#include <iostream>
#include <fstream>
using namespace std;

struct Student {
	int godine;
	string ime;
};

//int main() {
//	int brojUnosa;
//	cout << "Koliko studenata zelite unijeti u sustav? ";
//	cin >> brojUnosa;
//
//	ofstream fout;
//	fout.open("studenti.dat", ios::binary);
//	if (fout.fail())
//	{
//		cout << "Datoteka nije uspjesno otvorena. " << endl;
//	}
//
//	Student studenti;
//	for (int i = 0; i < brojUnosa; i++)
//	{
//		cout << "Unesite godine za " << i + 1 << ". studenta: ";
//		cin >> studenti.godine;
//		cout << "Unesite ime za " << i + 1 << ". studenta: ";
//		cin >> studenti.ime;
//		fout.write((char *) &studenti, sizeof(studenti));
//	}
//	fout.close();
//
//	ifstream fin;
//	fin.open("studenti.dat", ios::binary);
//	int brojac = 1;
//	fin.read((char*)&studenti, sizeof(studenti));
//	while (!fin.eof())
//	{
//		cout << "Godine " << brojac << ". studenta: " << studenti.godine << endl;
//		cout << "Ime " << brojac << ". studenta: " << studenti.ime << endl;
//		brojac + 1;
//		fin.read((char*)&studenti, sizeof(studenti));
//	}
//	fin.close();
//}