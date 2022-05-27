#include <iostream>
#include <fstream>
using namespace std;

void sortiraj(char* polje, int n) {
	for (int i = 0; i < n; i++)
	{
		char temp = *(polje+i);
		int j = i;
		while (j > 0 && temp < *(polje + (j-1)))
		{
			*(polje+j) = *(polje + (j - 1));
			j--;
		}
		swap(*(polje+j), temp);
	}
}

//int main() {
//	int n = 10;
//	char* polje = new char[n];
//
//	for (int i = 0; i < n; i++)
//	{
//		cout << "unesite " << i + 1 << ". znak: ";
//		cin >> *(polje+i);
//	}
//
//	sortiraj(polje, n);
//
//	ofstream fout;
//	fout.open("antonio_janach.txt", ios::binary);
//	cout << endl << "sortirano polje: " << endl;
//	for (int i = 0; i < n; i++)
//	{
//		cout << *(polje+i) << " ";
//		fout.write((char *) &polje, sizeof(&polje));
//	}
//	fout.close();
//
//	cout << endl << "citanje iz datoteke: " << endl;
//	ifstream fin;
//	fin.open("antonio_janach.txt", ios::binary);
//	fin.read((char *) &polje, sizeof(polje));
//	int i = 0;
//	while (!fin.eof())
//	{
//		cout << *(polje+i) << " ";
//		fin.read((char*)&polje, sizeof(polje));
//		i++;
//	}
//	fin.close();
//
//
//	delete[] polje;
//}