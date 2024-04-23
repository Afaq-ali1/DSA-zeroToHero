#include <iostream>
#include <cstdlib> // for NULL
using namespace std;

struct Node {
    int data;
    Node* next;
};

class list {
    Node* head;
    Node* tail;
public:
    list() : head(NULL), tail(NULL) {} // Constructor to initialize head and tail
    void addNode(int val) {
        Node* temp = new Node;
        temp->data = val;
        temp->next = NULL;
        if (head == NULL) {
            head = temp;
            tail = temp;
        } else {
            tail->next = temp;
            tail = temp;
        }
    }
    void deleteNode() {
        if (head == NULL) {
            cout << "Node is empty";
            return;
        }
        if (head == tail) {
            delete tail;
            head = NULL;
            tail = NULL;
            return;
        }
        Node* current = head;
        while (current->next != tail) {
            current = current->next;
        }
        delete tail;
        tail = current;
        tail->next = NULL;
    }
    void display() {
        cout << "Displaying nodes:" << endl;
        Node* curr = head;
        while (curr != NULL) {
            cout << "Node data: " << curr->data << endl;
            curr = curr->next;
        }
    }
    void bubbleSort()
    {
    	for(Node* ptr1=head;ptr1!=NULL;ptr1=ptr1->next)
    	{
    		for(Node* ptr2=head;ptr2->next!=NULL;ptr2=ptr2->next)
    		{
    			if(ptr2->data>ptr2->next->data)
    			{
    				int temp=ptr2->data;
    				ptr2->data=ptr2->next->data;
    				ptr2->next->data=temp;
				}
			}
		}
	}
};

int main() {
    list l;
    l.addNode(2);
    l.addNode(3);
    l.addNode(1);
    l.bubbleSort();
    l.display();
	return 0;
}

