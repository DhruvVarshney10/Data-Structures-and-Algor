// DeleteANodeLinkedList.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Dhruv Varshney
//Jan 5, 2021
//Delete a Node in linked list

#include <iostream>

using namespace std;

struct node {

	int info;
	node* link;
};

node* first, * last, * newnode;

void create() {

	int num[] = { 1, 4, 8, 10, 13 };

	first = NULL;
	last = NULL;

	for (int i = 0; i < sizeof(num) / 4; i++) {
		newnode = new node;
		if (first == NULL) {
			newnode->info = num[i];
			newnode->link = NULL;
			first = newnode;
			last = newnode;
		}
		else {
			newnode->info = num[i];
			newnode->link = NULL;
			last->link = newnode;
			last = newnode;

		}
	}
}
void deleteNode(int index) { // inserts the element key after the index node

	node* p, * tail;
	p = first;
	tail = NULL;

	if (index == 1) {
		first = first->link;
		delete p;
	}
	else {
		for (int i = 1; i < index; i++) {
			tail = p;
			p = p->link;
		}
		tail->link = p->link;
		delete p;
	}

}

int main()
{
	create();
	deleteNode(2); 

	node* p;
	p = first;


	while (p != NULL) {
		cout << p->info << endl;
		p = p->link;
	}

}
/*
1
8
10
13
*/
