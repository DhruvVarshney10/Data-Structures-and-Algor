// MergeTwoSortedLinkedList.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Dhruv Varshney
//Jan 11, 2021
//Merge Two Sorted Linked List

#include <iostream>

using namespace std;

struct node {

	int info;
	node* link;
};

node* first, *second, * last1, *last2, * newnode1, *newnode2;

void create1(int num[], int n) {


	first = NULL;
	last1 = NULL;

	for (int i = 0; i < n; i++) {
		newnode1 = new node;
		if (first == NULL) {
			newnode1->info = num[i];
			newnode1->link = NULL;
			first = newnode1; 
			last1 = newnode1;
		}
		else {
			newnode1->info = num[i];
			newnode1->link = NULL;
			last1->link = newnode1;
			last1 = newnode1;

		}
	}
}

void create2(int num[], int n) {


	second = NULL;
	last2 = NULL;

	for (int i = 0; i < n; i++) {
		newnode2 = new node;
		if (second == NULL) {
			newnode2->info = num[i];
			newnode2->link = NULL;
			second = newnode2;
			last2 = newnode2;
		}
		else {
			newnode2->info = num[i];
			newnode2->link = NULL;
			last2->link = newnode2;
			last2 = newnode2;

		}
	}
}
node* head, * last;
void merge(struct node* a, struct node* b) {

	if (a->info < b->info) {
		last = head = a;
		a = a->link;
		head->link = NULL;
		
	}
	else {
		last = head = b;
		b = b->link;
		head->link = NULL;
		
	}

	while (a != NULL && b != NULL) {
		if (a->info < b->info) {
			last->link = a;
			last = a;
			a = a->link;
			last->link = NULL;
		}
		else {
			last->link = b;
			last = b;
			b = b->link;
			last->link = NULL;
		
		}
	}
}
void display(node* pointer) {
	while (pointer != NULL) {
		cout << pointer->info << endl;
		pointer = pointer->link;
	}
}

int main()
{
	int num1[] = { 1, 3, 5, 7, 9 };
	int num2[] = { 2, 4, 6, 8, 10 };
	create1(num1, 5);
	create2(num2, 5);
	
	merge(first, second);
	display(head);

}
/*
1
2
3
4
5
6
7
8
9
*/
