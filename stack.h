#ifndef STACK_ARRAY_H
#define STACK_ARRAY_H

#include <iostream>

using namespace std;

#define MAX 100  

struct Stack {
    int arr[MAX];
    int top;

    
    Stack() : top(-1) {}

    void push(int val) {
        if (top==MAX-1) {
            cout << "Stack Overflow" << endl;
            return;
        }
        arr[++top] = val;
        cout << "Pushed: " << val << endl;
    }

    int pop() {
        if (top==-1) {
            cout << "Stack Underflow" << endl;
            return -1;
        }
        return arr[top--];
    }

    int peek()  {
        if (top==-1) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return arr[top];
    }

    bool isEmpty()  {
        return top == -1;
    }

    void display()  {
        if (top==-1) {
            cout << "Stack is empty" << endl;
            return;
        }
        cout << "Stack : ";
        for (int i = top; i >= 0; --i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

};

#endif 
