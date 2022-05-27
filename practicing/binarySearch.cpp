#include <iostream>
using namespace std;

//int main() {
//	char niz[5] = { 'b','i','n','r','y' };
//	cout << "zadani niz: " << endl;
//	for (int i = 0; i < 5; i++)
//	{
//		cout << niz[i] << " ";
//	}
//	cout << endl;
//
//	char element;
//	cout << "unesite element: ";
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
//	if (niz[srednji] == element)
//	{
//		cout << "element je na poziciji: " << srednji << endl;
//	}
//	else
//	{
//		cout << "element nije pronadjen. " << endl;
//	}
//}