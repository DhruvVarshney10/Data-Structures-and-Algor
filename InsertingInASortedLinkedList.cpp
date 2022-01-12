// InsertingInASortedLinkedList.cpp : This file contains the 'main' function. Program execution begins and ends there.

//Dhruv Varshney
//Jan 5, 2021
//inserting in a Sorted linked list

#include <iostream>

using namespace std;

struct node {

	int info;
	node* link;
};

node* first, * last, * newnode;

void create() {

	int num[] = {1, 4, 8, 10, 13 };

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
void insertInSorted(int key) { // inserts the element key after the index node

	node* p, *tail;
	p = first;
	tail = first;

	while (p->info < key) {
		if (p == first) {
			p = p->link;
		}
		else {
			p = p->link;
			tail = tail->link;
		}
	}
	newnode = new node;
	newnode->info = key;
	newnode->link = p;

	tail->link = newnode;

}

int main()
{
	create();
	insertInSorted(5);

	node* p;
	p = first;


	while (p != NULL) {
		cout << p->info << endl;
		p = p->link;
	}

}
/*
1
4
5
8
10
13
*/



