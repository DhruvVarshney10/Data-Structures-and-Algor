// MergeTwoSortedLinkedList.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Dhruv Varshney
//Jan 6, 2021
//concatenate Two Sorted Linked List

#include <iostream>

using namespace std;

struct node {

	int info;
	node* link;
};

node* first, * second, * last1, * last2, * newnode1, * newnode2;

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
void concat(struct node* a, struct node* b) {

	last1->link = b;
}

int main()
{
	int num1[] = { 1, 2, 3, 4, 5 };
	int num2[] = { 6, 7, 8, 9, 0 };
	create1(num1, 5);
	create2(num2, 5);

	concat(first, second);

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
7
8
9
0
*/