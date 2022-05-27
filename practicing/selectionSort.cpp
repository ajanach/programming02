//algoritam sortiranja razmjenom ili odabirom djeli se na sortiranu i ne sortiranu podlistu
//odabire se najmanji element iz ne sortirane podliste i zamjenjuje se sa elementom na početku podliste sa ne sortiranim podacima
//nakon svakog odabira i razmjene, zid između dviju podlisti se pomiče, odnosno povečava se broj sortiranih elemenata i smanjuje s broj ne sotiranih elemenata

#include <iostream>
using namespace std;

//void selectionSort(int niz[], int n) {
//	for (int i = 0; i < n - 1; i++)
//	{
//		int najmanji = i;
//		for (int j = i + 1; j < n; j++)
//		{
//			if (niz[j] > niz[najmanji])
//			{
//				najmanji = j;
//			}
//		}
//		swap(niz[i], niz[najmanji]);
//	}
//}

//int main() {
//	int niz[5] = { 5, 3, 1, 4, 2 };
//	cout << "Ne sortirani niz: " << endl;
//	for (int i = 0; i < 5; i++)
//	{
//		cout << niz[i] << " ";
//	}
//
//	selectionSort(niz, 5);
//
//	cout << "Sortirani niz korištenjem algoritma sortiranja - razmjenom ili odabirom: " << endl;
//	for (int i = 0; i < 5; i++)
//	{
//		cout << niz[i] << " ";
//	}
//}