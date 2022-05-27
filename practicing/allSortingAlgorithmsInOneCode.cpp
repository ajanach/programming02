#include <iostream>
using namespace std;

void bubbleSort(int niz[], int n) {
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (niz[i] > niz[j])
			{
				swap(niz[i], niz[j]);
			}
		}
	}
}

void insertionSort(int niz[], int n) {
	for (int i = 0; i < n; i++)
	{
		int temp = niz[i];
		int j = i;
		while (j > 0 && temp < niz[j - 1])
		{
			niz[j] = niz[j - 1];
			j--;
		}
		swap(niz[j], temp);
	}
}

void selectionSort(int niz[], int n) {
	for (int i = 0; i < n - 1; i++)
	{
		int najmanji = i;
		for (int j = i + 1; j < n; j++)
		{
			if (niz[j] < niz[najmanji])
			{
				najmanji = j;
			}
		}
		swap(niz[i], niz[najmanji]);
	}
}

//int main() {
//	int niz[5] = { 3, 1, 4, 2, 5 };
//	cout << "Nesortirani niz: " << endl;
//	for (int i = 0; i < 5; i++)
//	{
//		cout << niz[i] << " ";
//	}
//
//	//bubbleSort(niz, 5);
//	insertionSort(niz, 5);
//	//selectionSort(niz, 5);
//
//	cout << endl << "Sortirani niz: " << endl;
//	for (int i = 0; i < 5; i++)
//	{
//		cout << niz[i] << " ";
//	}
//
//	int element;
//	cout << endl << "Unesite trazeni element: ";
//	cin >> element;
//
//	int prvi = 0, srednji, zadnji = 4;
//	while (prvi <= zadnji)
//	{
//		srednji = (prvi + zadnji) / 2;
//		if (niz[srednji] == element)
//		{
//			break;
//		}
//		else if (element < niz[srednji])
//		{
//			zadnji = srednji - 1;
//		}
//		else
//		{
//			prvi = srednji + 1;
//		}
//	}
//
//	if (niz[srednji] == element)
//	{
//		cout << "Trazeni element se nalazi na mjestu: " << srednji << endl;
//	}
//	else
//	{
//		cout << "Trazeni element nije pronadjen." << endl;
//	}
//}