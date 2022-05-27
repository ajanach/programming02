////node*& is a reference to a pointer, where node* is simply a pointer
////node*& - don't create copy of pointer, direct access to pointer from main
////node * - creates copy of pointer, indirect access to pointer from main
//
//#include <iostream>
//using namespace std;
//
//struct node
//{
//	int data;
//	node* next;
//};
//
//void pushNode(node*& head, int data) {
//	node* newNode = new node;
//	newNode->data = data;
//	newNode->next = head;
//	head = newNode;
//	cout << "node is added into stack" << endl << endl;
//}
//
//bool checkEmpty(node* head) {
//	if (head == NULL)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//void removeNode(node*& head) {
//	node* tmp = head;
//	head = head->next;
//	delete tmp;
//	cout << "node is succesfully deleted from stac" << endl << endl;
//}
//
//void printStack(node* head) {
//	int counter = 1;
//	while (head != NULL)
//	{
//		cout << counter << ". data in node is: " << head->data << endl;
//		counter++;
//		head = head->next;
//	}
//	cout << endl;
//}
//
//void stackDeallocation(node*& head) {
//	node* tmp;
//	while (head != NULL)
//	{
//		tmp = head;
//		head = head->next;
//		delete tmp;
//	}
//	head = NULL;
//	cout << "stack is successftully deallocated" << endl << endl;
//}
//
//int main() {
//	node* head = NULL;
//	char select;
//
//	do
//	{
//		cout << "1 - add node into stack" << endl;
//		cout << "2 - remove node from stack" << endl;
//		cout << "3 - print node from stack" << endl;
//		cout << "select your choice: ";
//		cin >> select;
//
//		switch (select)
//		{
//		case '1':
//			int data;
//			cout << "add value into new node: ";
//			cin >> data;
//			pushNode(head, data);
//			break;
//		case '2':
//			if (checkEmpty(head) == 1)
//			{
//				cout << "stack is empty" << endl;
//			}
//			else
//			{
//				removeNode(head);
//			}
//			break;
//		case '3':
//			if (checkEmpty(head) == 1)
//			{
//				cout << "stack is empty" << endl;
//			}
//			else
//			{
//				printStack(head);
//			}
//			break;
//		default:
//			break;
//		}
//
//	} while (select != '0');
//
//	stackDeallocation(head);
//	cout << "endd of programm" << endl;
//}