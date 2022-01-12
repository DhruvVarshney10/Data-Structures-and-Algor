// ReversingLinkedList(SlidingLinks).cpp : This file contains the 'main' function. Program execution begins and ends there.
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
void Reverse(struct node* f) {

	node* p, * q, * r;

	p = f;
	q = NULL;
	r = NULL;
	while (p != NULL) {
		r = q;
		q = p;
		p = p->link;
		q->link = r;
	}
	first = q;

}

int main()
{
	create();
	Reverse(first);

	node* p;
	p = first;


	while (p != NULL) {
		cout << p->info << endl;
		p = p->link;
	}

}
/*
6
6
5
4
4
3
2
1
1
*/
