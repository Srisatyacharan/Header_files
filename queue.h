#ifndef QUEUE_ARRAY_H
#define QUEUE_ARRAY_H

#include <iostream>
using namespace std;  

#define SIZE 5

struct Queue {
    int queue[SIZE];
    int front;
    int rear;

   
    Queue() {
        front = -1;
        rear = -1;
    }

    void enqueue(int value) {
        if (rear == SIZE - 1) {
            cout << "Queue is overFlow!!!" << endl;
        } else {
            if (front == -1) front = 0;
            rear++;
            queue[rear] = value;
            cout << value << " added to  queue." << endl;
        }
    }

    void dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue is Empty!!!" << endl;
        } else {
            cout << queue[front] << " removed from queue." << endl;
            front++;
        }
    }

    
    void display(){
        if (front == -1 || front > rear) {
            cout << "Queue is Empty!!!" << endl;
        } else {
            cout << "Queue: ";
            for (int i = front; i <= rear; ++i) {
                cout << queue[i] << " ";
            }
            cout << endl;
        }
    }
};

#endif // QUEUE_H
