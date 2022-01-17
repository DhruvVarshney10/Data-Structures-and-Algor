// InitializeStackAndItsFunctions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct Stack {
    int top;
    int size;
    int* S;

};
void create(struct Stack *sta, int length) {
    sta->size = length;
    sta->S = new int[sta->size];
    sta->top = -1;
}

void push(struct Stack *st, int val) {
    if (st->top < st->size) {
        st->top++;
        st->S[st->top] = val;
    }
    else {
        cout << "Stack Overflow";
    }
}
int pop(struct Stack * st) {
    int x = -1;
    if (st->top < 0) {
        cout << "Stack Underflow";
    }
    else {
        x = st->S[st->top];
        st->top--;
   }
    return x;
}
void display(struct Stack *st) {
   
    for (int i = st->top; i > -1; i--) {
        cout << st->S[i] << endl;
    }
}

int main()
{
    Stack st;
    create(&st, 5);

    push(&st, 1);
    push(&st, 2);
    push(&st, 3);
    push(&st, 4);
    push(&st, 5);

    pop(&st);


    display(&st);
}
/*
4
3
2
1
*/

