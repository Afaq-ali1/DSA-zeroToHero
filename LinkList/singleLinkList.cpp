#include <iostream>
using namespace std;

struct Node 
{
    int data;
    Node* nextNode;
};

class LinkedList 
{
    Node* head;
    Node* tail;

	public:
    	LinkedList() : head(NULL),tail(NULL) {}
		void addNode(int data) 
		{
        	Node* temp = new Node;
        	temp->data = data;
        	temp->nextNode = NULL;
        	if (head == NULL) 
			{
        	    head = temp;
        	    tail = temp;
        	}
			else
			{
            	tail->nextNode = temp;
            	tail=temp;
        	}
    }
    
    void addFirst(int data)
    {
    		Node* temp = new Node;
        	temp->data = data;
        	temp->nextNode = NULL;
        	if (head == NULL) 
			{
        	    head = temp;
        	    tail = temp;
        	}
			else
			{
        	    temp->nextNode = head;
            	head=temp;
        	}
	}
	
	void deleteFirstNode()
    {
    	if (head == NULL) 
		{
        	cout<<"List is Empty";
        	return;
		}
		
		Node* temp=head;
        head=head->nextNode;
        delete temp;
        
        if(head==NULL)	//if the list become empty, update tail to null
        {
        	tail=NULL;
		}
	}
	
	void deleteLastNode()
    {
    		if (tail == NULL) 
			{
        		cout<<"List is Empty";
        		return;
			}
			if(head==tail)
			{
				delete tail;
				head=tail=NULL;
				return;
			}
			Node* current=head;
			while(current->nextNode!=tail)
			{
				current=current->nextNode;
			}
			delete tail;
			tail=current;
			tail->nextNode=NULL;
	}

    void display() 
	{
        Node* temp;
        temp = head;
        while (temp != NULL) 
		{
            cout << "Node data is : " << temp->data << endl;
            temp = temp->nextNode;
        }
    }

};

int main() 
{
    LinkedList l;
	
    l.addNode(22);
    l.addNode(23);
    l.addFirst(21);
    l.deleteFirstNode();
    l.deleteLastNode();
    l.display();
    return 0;
}
