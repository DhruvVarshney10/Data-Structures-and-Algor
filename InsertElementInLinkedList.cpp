
//Dhruv Varshney
//Jan 5, 2021
//inserting in a linked list at specific index

#include <iostream>

using namespace std;

struct node {

	int info;
	node* link;
};

node* first, * last, * newnode;

void create() {

	int num[] = { 2, 5, 7, 3, 7, 0, 4, 9, 8 };
	
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
void insert(int key, int index) { // inserts the element key after the index node

	node* p;
	p = first;

	for (int i = 1; i < index; i++) {
		p = p->link;
	}
	newnode = new node;
	newnode->info = key;
	newnode->link = p->link;
	p->link = newnode;
}

int main()
{
	create();
	insert(5, 4);
	
	node* p;
	p = first;
	

	while (p != NULL) {
		cout << p->info << endl;
		p = p->link;
	}

}
/*
2
5
7
3
5
7
0
4
9
8
*/


