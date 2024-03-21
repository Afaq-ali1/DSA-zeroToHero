#include <iostream>
using namespace std;

class Stack {
    int top1, top2, maxSize;
    int* stack;
public:
    Stack(int size) {
        top1 = -1;
        top2 = size;
        maxSize = size;
        stack = new int[maxSize];
    }

    void push1(int value) {
        if (top1 < top2 - 1) {
            top1++;
            stack[top1] = value;
        } else {
            cout << "Stack 1 overflow";
        }
    }

    void push2(int value) {
        if (top1 < top2 - 1) {
            top2--;
            stack[top2] = value;
        } else {
            cout << "Stack 2 overflow";
        }
    }

    int pop1() {
        if (top1 >= 0) {
            int x = stack[top1];
            top1--;
            return x;
        } else {
            cout << "Stack 1 underflow";
            return -1; // Return an error value
        }
    }

    int pop2() {
        if (top2 < maxSize) {
            int x = stack[top2];
            top2++;
            return x;
        } else {
            cout << "Stack 2 underflow";
            return -1; // Return an error value
        }
    }

    void display() {
        for (int i = 0; i <= top1; i++) {
            cout << stack[i] << " ";
        }
        cout << endl;
        for (int i = maxSize - 1; i >= top2; i--) {
            cout << stack[i] << " ";
        }
    }
};

int main() {
    Stack s(5); // Increased size to 5 for demonstration purposes
    s.push1(2);
    s.push1(3);
    s.push2(1);
    s.push2(5);
    s.push2(4);
    s.display(); // Expected output: 3 2 5 4 1
}

