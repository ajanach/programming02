//#include <iostream>
//#include <time.h>
//#include <cstdlib>
//#include <fstream>
//using namespace std;
//
//void Zapisi(int* polje, int n) {
//	ofstream fout;
//	fout.open("zapisi.dat", ios::binary);
//	for (int i = 0; i < n; i++)
//	{
//		fout.write((char *) polje, sizeof(polje));
//	}
//	fout.close();
//}
//
//void Sortiraj(int* polje, int n) {
//	for (int i = 0; i < n - 1; i++)
//	{
//		int najmanji = i;
//		for (int j = i + 1; j < n; j++)
//		{
//			if (*(polje+najmanji) > *(polje+j))
//			{
//				najmanji = j;
//			}
//		}
//		swap(*(polje+i), *(polje+najmanji));
//	}
//}
//
//void Ispisi(int* polje, int n) {
//	cout << "Sortirani niz je: " << endl;
//	for (int i = 0; i < n; i++)
//	{
//		cout << *(polje + i) << " ";
//	}
//
//	cout << endl << "Ne sortirani niz je: " << endl;
//	ifstream fin;
//	fin.open("zapisi.dat", ios::binary);
//	fin.read((char*)polje, sizeof(polje));
//	int i = 0;
//	while (!fin.eof())
//	{
//		cout << *(polje + i) << " ";
//		fin.read((char*)polje, sizeof(polje));
//		i++;
//	}
//	fin.close();
//}

//int main() {
//	srand(time(NULL));
//
//	int n = 10;
//	int* polje = new int[n];
//
//	cout << "Brojevi koji su upisani u datoteku: " << endl;
//	for (int i = 0; i < n; i++)
//	{
//		*(polje + i) = (rand()% 100 + 1);
//		cout << *(polje + i) << " ";
//	}
//	cout << endl;
//
//	Zapisi(polje, n);
//	Sortiraj(polje, n);
//	Ispisi(polje, n);
//
//
//	delete[] polje;
//}