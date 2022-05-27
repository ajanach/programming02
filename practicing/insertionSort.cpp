//algoritam sortiranja umetanjem (insertion sort), lista se dijeli na dvije podliste, sortiranu i nesortiranu
//u svakom prolazu prvi element nesortirane poliste se premješta u sortiranu podlistu tako da se umetne na odgovarajuće mjesto
//ako imamo listu od n elemenata trebat će n - 1 prolaza da bi lista bila sortirana
//prvi element koji se nalazi kraj konceptualnog zida s nesortirane podliste prelazi u sortiranu podlistu i uspoređuje se sa svakim elementom kako bi pronašao svoje mjesto

#include <iostream>
using namespace std;

//void insertionSort(int niz[], int n) {
//	for (int i = 0; i < n; i++)
//	{
//		int j = i;
//		int temp = niz[i];
//		while (j > 0 && temp < niz[j - 1])
//		{
//			niz[j] = niz[j - 1];
//			j--;
//		}
//		niz[j] = temp;
//	}
//}
//
//int main() {
//	int niz[5] = { 2, 4, 1, 5, 3 }; cout << "nesortirana lista: " << endl; for (int i = 0; i < 5; i++)
//	{
//		cout << niz[i] << " ";
//	}
//	insertionSort(niz, 5);
//	//selectionSort(niz, 5);
//	//bubbleSort(niz, 5);
//
//	cout << endl << "sortirana lista: " << endl;
//	for (int i = 0; i < 5; i++)
//	{
//		cout << niz[i] << " ";
//	}
//}