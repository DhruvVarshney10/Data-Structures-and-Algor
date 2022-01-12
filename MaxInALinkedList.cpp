// MaxInALinkedList.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Dhruv Varshney
//Jan 5, 2021
// Finding Max in a Linked List

#include <iostream>

using namespace std;

struct node {

	int info;
	node *link;
};

int main()
{
	int num[] = {2, 5, 7, 3, 7, 0, 4, 9, 8};
	node *first, * last, * newnode;

	first = NULL;
	last = NULL;

	for (int i = 0; i < sizeof(num)/4; i++) {
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
	node* p;
	p = first;
	int max = INT_MIN;
	
	while(p != NULL){
		if (p->info > max) {
			max = p->info;
		}
		p = p->link;
	}
	cout << max;
}
/*
9
*/


