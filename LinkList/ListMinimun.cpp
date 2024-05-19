#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class List {
    Node* head;
    Node* tail;
    Node* min;
    Node* max;
public:
    List() : head(NULL), tail(NULL), min(NULL),max(NULL) {}

    void insertNode(int data) {
        Node* newNode = new Node;
        newNode->data = data;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            tail = newNode;
            min = newNode;
            max = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;

            if (newNode->data < min->data) {
                min = newNode;
            }
                        if (newNode->data > max->data) {
                max = newNode;
            }
        }
    }

    void display() {
        Node* curr = head;
        while (curr != NULL) {
            cout << "Data is: " << curr->data << endl;
            curr = curr->next;
        }
        if (min != NULL) {
            cout << "Min: " << min->data << endl;
            cout << "Max: " << max->data << endl;
        }
    }

    
};

int main() {
    List l;

    l.insertNode(121);
    l.insertNode(21);
    l.insertNode(0);
    l.insertNode(23);
    l.insertNode(777);
    l.display();

    return 0;
}

