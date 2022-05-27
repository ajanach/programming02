//algoritam odabirom ili razmjenom dijeli se na dvije podliste, sortiranu i ne sortiranu
//pronalazi se najmanji element iz ne sortirane pod liste i zamjenjuje se sa elementom na početku podliste sa ne sortiranim podacima
//nakon svake zamjene konceptualni se između dviju podlisti pomiče, odnosno povečava se broj sortiranih elemenata i smanjuje se broj ne sortiranih elemenata

#include <iostream>
#include <fstream>
using namespace std;

//void selectionSort(int niz[], int n) {
//	for (int i = 0; i < n - 1; i++)
//	{
//		int najmanji = i;
//		for (int j = i + 1; j < n; j++)
//		{
//			if (niz[najmanji] > niz[j])
//			{
//				najmanji = j;
//			}
//		}
//		swap(niz[i], niz[najmanji]);
//	}
//}

//int main() {
//	int unos;
//	ofstream fout;
//	ifstream fin;
//	fout.open("datoteka.txt", ios::out);
//	if (fout.fail())
//	{
//		cout << "datoteka nije otvorena." << endl;
//	}
//	else
//	{
//		cout << "Upis 5 elemenata u datoteku: " << endl;
//		for (int i = 0; i < 5; i++)
//		{
//			cout << "unesite broj: ";
//			cin >> unos;
//			fout << unos << endl;
//		}
//	}
//	fout.close();
//
//	int niz[5];
//	fin.open("datoteka.txt", ios::in);
//	if (fin.fail())
//	{
//		cout << "datoteka nije otvorena." << endl;
//	}
//	else
//	{
//		for (int i = 0; i < 5; i++)
//		{
//			fin >> niz[i];
//		}
//
//		cout << "Elementi koje ste unijeli u datoteku: " << endl;
//		for (int i = 0; i < 5; i++)
//		{
//			cout << niz[i] << " ";
//		}
//
//		selectionSort(niz, 5);
//
//		cout << endl << "sortirani elementi koji su uneseni u datoteku: " << endl;
//		for (int i = 0; i < 5; i++)
//		{
//			cout << niz[i] << " ";
//		}
//	}
//	fin.close();
//}