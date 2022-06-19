//#include <iostream>
//using namespace std;
//
//struct NumberNode 
//{
//	int Data;
//	NumberNode* next;
//};
//
//int main() {
//	NumberNode* P1 = new NumberNode;
//	NumberNode* P2 = new NumberNode;
//	NumberNode* P3 = new NumberNode;
//	NumberNode* P4 = new NumberNode;
//
//	P1->Data = 5; //vrijednost 5
//	P1->next = P2; //P1 pokazivač pokazuje na adresu od P2
//	P2->Data = 6; //vrijednost 6
//	P2->next = P3; //nema nikakvu vrijednost
//	P2->next->next = P4; //nema nikakvu vrijednost
//	P2->next->next->Data = 8; //P2 ima vrijednost 8
//	P1->next->next->Data = 9; //P1 ima vrijednost 9
//
//	cout << P1->Data << endl; //5
//	cout << P2->Data << endl; //6
//	cout << P1->next->Data << endl; //6
//	cout << P2->next->Data << endl;
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//struct Node
//{
//	char a;
//	Node* next;
//};
//
//int main() {
//	Node* P1 = new Node;
//	Node* P2 = new Node;
//	Node* P3 = new Node;
//	Node* P4 = new Node;
//
//	P1->a = 'L';
//	P2->a = 'A';
//	P3->a = 'K';
//	P4->a = 'O';
//
//	P1->next = P2;
//	P2->next = P3;
//	P3->next = P4;
//	P4->next = NULL;
//
//	P4->next = P2->next;
//	P3 = P1;
//	P1->next = P2->next;
//
//	cout << P2->a << P2->next->a << P3->a << P4->a << endl;
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//struct Node
//{
//	char a;
//	Node* next;
//};
//
//int main() {
//	Node* P1 = new Node;
//	Node* P2 = new Node;
//	Node* P3 = new Node;
//	Node* P4 = new Node;
//
//	P1->a = 'R';
//	P2->a = 'D';
//	P3->a = 'E';
//	P4->a = 'C';
//
//	P1->next = P2;
//	P2->next = P3;
//	P3->next = P4;
//	P4->next = NULL;
//
//	P4->next = P1->next; 
//	P3 = P1;
//	P2->next = P3->next;
//
//	cout << P2->next->a << P3->a << P4->a << P1->a << endl;
//
//	return 0;
//}

// 30. zadatak:
//#include <iostream>
//using namespace std;
//
//int main() {
//
//	int b1 = 4, b2 = 6, * pok1, * pok2;
//	pok1 = &b1;
//	pok2 = pok1;
//	*pok1 = 22;
//	b1 = 3;
//	cout << *pok2 << endl;
//}


//33. zadatak
//#include <iostream>
//using namespace std;
//
//int main() {
//	int a[5] = { 4, 4, 6, 2, 8 };
//	int* p = &a[3];
//	cout << a[1] << endl;
//	cout << p[0] << endl;
//	cout << a[2] << endl;
//	cout << p[1] << endl;
//	cout << a[3] << endl;
//	cout << *(p-1) << endl;
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//struct s
//{
//	float d1;
//	char d2;
//	char d3;
//};
//
//int main() {
//	float a;
//	s s1 = { 2, 'c', 'b' };
//	s s2 = { 4, 'a', 'e' };
//	s* p1;
//	s* p2;
//	p2 = &s1;
//	p1 = &s2;
//	s* p3 = &s2;
//	p3 = p1;
//	cout << p2->d2 << p1->d3 << endl;
//
//	return 0;
//}