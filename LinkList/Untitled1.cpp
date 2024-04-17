#include <iostream>
using namespace std;
struct Node{
	int data;
	Node* nextNode;
	Node* prevNode;
};
class doubleLinkList{
	Node* head;
	public:
		doubleLinkList():head (NULL) {}
		void insertNode(int value)
		{
			Node* temp = new Node;
			temp->data=value;
			temp->nextNode=NULL;
			temp->prevNode=NULL;
			if(head==NULL)
			{
				head=temp;
			}
			else
			{
				Node* cur=head;
				while(cur->nextNode!=NULL)
				{
					cur=cur->nextNode;
				}
				cur->nextNode=temp;
				temp->prevNode=cur;
			}
		}
		void inserAtFirst(int val)
		{
			Node* temp=new Node;	
			temp->data=val;
			temp->nextNode=NULL;
			head->prevNode=NULL;

				if(head==NULL)
				{
					cout<<"list is empty"<<endl;
					return;
				}
					temp->nextNode=head;
					head->prevNode=temp;
					head=temp;
		}
		
		void deleteNode()
		{
			if(head==NULL)
			{
				cout<<"List is empty"<<endl;
			}
			else if(head->nextNode==NULL)
			{
				delete head;
				head=NULL;
			}
			else
			{
				Node* cur=head;
				while(cur->nextNode!=NULL)
				{
					cur=cur->nextNode;
				}
				cur->prevNode->nextNode=NULL;
				delete cur;
			}
		}
		void display()
		{
			if(head==NULL)
			{
				cout<<"List is Empty"<<endl;
			}
			else
			{
				Node* cur =head;
				while(cur!=NULL)
				{
					cout<<cur->data<<endl;
					cur=cur->nextNode;
				}
			}
		}
};
int main()
{
	doubleLinkList l;
	l.insertNode(2);
	l.insertNode(77);
	l.inserAtFirst(1);
	l.insertNode(99);
	l.inserAtFirst(22);
	l.deleteNode();
	l.display();
}
