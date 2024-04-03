#include <iostream>
using namespace std;
struct Node{
	int data;
	Node *nextNode;
};
class linkList{
	public:
		Node* head;
		Node* tail;
		void addNode(int data)
		{
			Node *temp= new Node;
			temp->data=data;
			temp->nextNode = NULL;
			
			if(head==NULL)
			{
				head=temp;
				tail=temp;
			}
			tail->nextNode=temp;
			tail=temp;
		}
		void deleteNode()
		{
			if(tail==NULL)
			{
				cout<<" Empty";
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
			Node *temp;
			temp=head;
			while(temp!=NULL)
			{
				cout<<temp->data<<" ";
				temp=temp->nextNode;
			}
		}
};
int main()
{
	linkList l;
	l.addNode(1);
	l.addNode(44);
	l.addNode(22);
//	l.deleteNode();
	l.display();
}
