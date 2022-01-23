// InitializeQueueUsingArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Queue {
private:
    int front;
    int rear;
    int size;
    int* Q;
public:
    Queue() { front = rear = -1; size = 10; Q = new int[size]; }
    Queue(int s) { front = rear = -1; size = s; Q = new int[s]; }
    void inqueue(int val) {
        if (rear == size - 1) {
            cout << "Queue is Full";
            return;
        }
        rear++;
        Q[rear] = val;
    }
    int dequeue() {
        int x = -1;
        if (front == rear) {
            cout << "Queue is Empty";
            return x;
        }
        front++;
        x = Q[front];
        return x;
    }
    void display() {
        for (int i = front + 1; i <= rear; i++) {
            cout << Q[i] << endl;
        }
    }

};

int main()
{
    Queue one = Queue(10);
    one.inqueue(3);
    one.inqueue(4);
    one.inqueue(5);
    one.inqueue(6);
    one.inqueue(7);

    one.dequeue();

    one.display();
}
/*
4
5
6
7
*/

