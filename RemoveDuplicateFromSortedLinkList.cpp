// RemoveDuplicateFromSortedLinkList.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

	int num[] = { 1, 1, 2, 3, 4, 4, 5, 6, 6 };

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
void RemoveDuplicate(struct node *f) {

	node* p = f;
	node* q = f->link;
	while (q != NULL) {
		if (p->info != q->info) {
			p = q;
			q = q->link;

		}
		else {
			p->link = q->link;
			delete q;
			q = p->link;
		}

	}
}

int main()
{
	create();
	RemoveDuplicate(first);

	node* p;
	p = first;


	while (p != NULL) {
		cout << p->info << endl;
		p = p->link;
	}

}
/*
1
2
3
4
5
6
*/


