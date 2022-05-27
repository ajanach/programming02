#include <iostream>
#include <fstream>
using namespace std;

//int main() {
//	ofstream fout;
//	fout.open("prodaja.txt", ios::out);
//	if (fout.fail())
//	{
//		cout << "Datoteka nije uspjesno otvorena." << endl;
//	}
//
//	int prodaja;
//	for (int i = 0; i < 12; i++)
//	{
//		cout << "Unesite prodaju racunala za mjesec: " << i + 1 << ". -> ";
//		cin >> prodaja;
//		fout << prodaja << endl;
//	}
//	fout.close();
//
//	ifstream fin;
//	fin.open("prodaja.txt", ios::in);
//	if (fin.fail())
//	{
//		cout << "Datoteka nije uspjesno otvorena." << endl;
//	}
//
//	int prodajaUkupno = 0;
//	int iznosMjesec[12];
//	for (int i = 0; i < 12; i++)
//	{
//		fin >> iznosMjesec[i];
//		prodajaUkupno = prodajaUkupno + iznosMjesec[i];
//	}
//	fin.close();
//
//	fout.open("obracun.txt", ios::out);
//	if (fout.fail())
//	{
//		cout << "Datoteku nije moguce otvoriti. " << endl;
//	}
//
//	fout << "Prosjek prodaje: " << prodajaUkupno / 12 << endl;
//
//	for (int i = 0; i < 12; i++)
//	{
//		if ((prodajaUkupno / 12) < iznosMjesec[i])
//		{
//			fout << "Iznad prosjecan mjesec je: " << i + 1 << " i za taj mjesec je prodaja iznosila: " << iznosMjesec[i]<< endl;
//		}
//	}
//	fout.close();
//
//	return 0;
//}