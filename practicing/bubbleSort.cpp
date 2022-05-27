//algoritam sortiranja u valovima, lista se dijeli na dvije podliste, sortiranu i ne sortiranu
// najmanji element iz ne sortirane podliste ispliva kao mjehuric u sortiranu podlistu
//u ovom algoritmu sortiranja bitno je uspoređivati dva elementa (u paru), i, ako je jedan element veći ili manji od drugoga on treba zamjenit mjesto
//konceptualni zid se može pomicati u lijevo ili desno

#include <iostream>
using namespace std;

//void bubbleSort(int niz[], int n) {
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//		{
//			if (niz[i] > niz[j])
//			{
//				swap(niz[i], niz[j]);
//			}
//		}
//	}
//}

//int main() {
//	int niz[5] = { 2, 1, 4, 3, 5 };
//	cout << "nesortirana lista: " << endl;
//	
//	for (int i = 0; i < 5; i++)
//	{
//		cout << niz[i] << " ";
//	}
//
//	bubbleSort(niz, 5);
//
//	cout << endl << "sortirana lista: " << endl;
//	for (int i = 0; i < 5; i++)
//	{
//		cout << niz[i] << " ";
//	}
//}