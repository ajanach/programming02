//#include <iostream>
//using namespace std;
//
//struct node
//{
//	int data;
//	node* next;
//};
//
//void pushNode(node*& head, node*& tail, int data) {
//	node* newNode = new node;
//	newNode->data = data;
//	newNode->next = NULL;
//	if (head == NULL)
//	{
//		head = newNode;
//	}
//	else
//	{
//		tail->next = newNode;
//	}
//	tail = newNode;
//	cout << "new node is added sucessfully" << endl << endl;
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
//void removeNode(node*& head, node*& tail) {
//	if (head == NULL)
//	{
//		tail = NULL;
//	}
//	node* tmp = head;
//	head = head->next;
//	delete tmp;
//	cout << "node is sucesftully deleted from stack" << endl << endl;
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
//}
//
//void stackDeallocation(node*& head, node*& tail) {
//	node* tmp;
//	while (head != NULL)
//	{
//		tmp = head;
//		head = head->next;
//		delete tmp;
//	}
//	head = NULL;
//	tail = NULL;
//	cout << "stack is sucesfully deallocated" << endl << endl;
//}
//
//int main() {
//	node* head = NULL;
//	node* tail = NULL;
//	char select;
//
//	do
//	{
//		cout << "1 - add node into stack" << endl;
//		cout << "2 - remove node from stack" << endl;
//		cout << "3 - print nodes from stack" << endl;
//		cout << "select your choice: ";
//		cin >> select;
//
//		if (select == '1')
//		{
//			int data;
//			cout << "add value into node: ";
//			cin >> data;
//			pushNode(head, tail, data);
//		}
//
//		else if (select == '2')
//		{
//			if (checkEmpty(head) == 1)
//			{
//				cout << "stack is empty, select function under number 1 in main menu" << endl;
//			}
//			else
//			{
//				removeNode(head, tail);
//			}
//		}
//
//		else if (select == '3')
//		{
//			if (checkEmpty(head) == 1)
//			{
//				cout << "stack is empty, select function under number 1 in main menu" << endl;
//			}
//			else
//			{
//				printStack(head);
//			}
//		}
//
//	} while (select != '0');
//
//	stackDeallocation(head, tail);
//	cout << "End of programm" << endl;
//}