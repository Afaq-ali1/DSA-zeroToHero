#include <iostream>
using namespace std;

class Stack {
    int top, maxSize;
    int* stack;
public:
    Stack(int size) {
        top = -1;
        maxSize = size;
        stack = new int[maxSize];
    }

    bool isEmpty() {
        return (top < 0);
    }

    void push(int value) {
        if (top < maxSize - 1) {
            stack[++top] = value;
        } else {
            cout << "Stack overflow";
        }
    }

    int pop() {
        if (!isEmpty()) {
            return stack[top--];
        } else {
            cout << "Stack underflow";
            return -1; // Return an error value
        }
    }

    void diplay() {
        for (int i = 0; i <= top; i++) {
            cout << stack[i] << " ";
        }
    }

    void reverse() {
        int* reversedStack = new int[maxSize];
        int reversedTop = -1;
        while (!isEmpty()) {
            reversedStack[++reversedTop] = pop();
        }
        
        top = reversedTop;
        delete[] reversedStack; // Free memory
    }
};

int main() {
    Stack s(3);
    s.push(3);
    s.push(2);
    s.push(1);
    s.reverse();
    s.diplay();
}

