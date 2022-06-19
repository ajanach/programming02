#include <iostream>
using namespace std;

struct node
{
	int data;
	node* next;
};

void addNode(node*& head, node*& tail, int data) {
	node* newNode = new node;
	newNode->data = data;
	newNode->next = NULL;

	if (head == NULL)
	{
		head = newNode;
	}
	else
	{
		tail->next = newNode;
	}

	tail = newNode;
	cout << "new node is succesfully added into stack" << endl;
}

bool checkEmpty(node* head) {
	if (head == NULL)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void removeNode(node*& head, node*& tail) {
	node* tmp;
	tmp = head;
	head = head->next;
	delete tmp;
	if (head == NULL)
	{
		tail = NULL;
	}
}

void printStack(node* head) {
	int counter = 1;
	while (head != NULL)
	{
		cout << counter << ". nodes data is: " << head->data << endl;
		counter++;
		head = head->next;
	}
}

void stackDeallocation(node*& head, node*& tail) {
	node* tmp;
	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		delete tmp;
	}
	head = NULL;
	tail = NULL;
	cout << "stack is successfully deallocated" << endl;
}

int main() {
	node* head = NULL;
	node* tail = NULL;
	char select;

	do
	{
		cout << "1 - add new node into stack" << endl;
		cout << "2 - remove node from stack" << endl;
		cout << "3 - print all nodes from stack" << endl;
		cout << "select your choice: ";
		cin >> select;
		
		switch (select)
		{
		case '1':
			int data;
			cout << "add data into new node: ";
			cin >> data;
			addNode(head, tail, data);
			break;
		case '2':
			if (checkEmpty(head) == 1)
			{
				cout << "stack is empty" << endl;
			}
			else
			{
				removeNode(head, tail);
			}
			break;
		case '3':
			if (checkEmpty(head) == 1)
			{
				cout << "stack is empty" << endl;
			}
			else
			{
				printStack(head);
			}
			break;
		default:
			break;
		}
	} while (select != '0');

	stackDeallocation(head, tail);
	cout << "end of programm" << endl;
	
	return 0;
}