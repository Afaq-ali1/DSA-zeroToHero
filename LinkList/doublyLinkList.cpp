#include <iostream>
using namespace std;
struct Node{
	int data;
	Node* nextNode;
	Node* prevNode;
};
class doubleLinkList{
	Node* head;
	Node* tail;
	public:
		void insertNode(int val)
		{
			Node* temp=new Node;
			temp->data=val;
			temp->nextNode=NULL;
			temp->prevNode=NULL;
			if(head==NULL)
			{
				head=temp;
				tail=temp;
			}
			else
			{
				tail->nextNode=temp;
				temp->prevNode=tail;
				tail=temp;
			}
		}
		
		void deleteNode()
		{
			if(head==NULL)
			{
				cout<<"List is empty.Nothing to delete";
				return;
			}
			else if(head->nextNode==NULL)
			{
				delete head;
				head=NULL;
				tail=NULL;
			}
			else
			{
				Node* cur=tail;
				tail=tail->prevNode;
				tail->nextNode=NULL;
				delete cur;
			}
		}

		void deleteFirstNode()
		{
			if(head== NULL)
			{
				cout<<"List is empty.Nothing to delete";
				return;	
			}
			else if(head->nextNode==NULL)
			{
				delete head;
				head=NULL;
				tail=NULL;
			}
			else
			{
				Node* cur=head;
				head=head->nextNode;
				head->prevNode=NULL;
				delete cur;
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
		
		void inserAtPosition(int val,int position)
		{
			Node* temp=new Node;	
			temp->data=val;
			temp->nextNode=NULL;
			head->prevNode=NULL;
			if(position<0)
			{
				cout<<"position must > zero"<<endl;
				delete temp;
				return;
			}
			if(position ==0)
			{
				if(head!=NULL)
				{
					temp->nextNode=head;
					head->prevNode=temp;
					head=temp;
				}
				else
				{
					head=temp;
					tail=temp;
				}
			}
		}
		
		void searchData(int val)
		{
			bool found=false;
			Node* cur =head;
				while(cur->nextNode!=NULL)
				{
					if(cur->data==val)
					{
						cout<<cur->data<<endl;	
						found=true;
					}
					cur=cur->nextNode;
				}
				if(found==false)
				{
					cout<<"Not found"<<endl;
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
		
		void displayReverse()
		{
				if(head==NULL)
			{
				cout<<"List is Empty"<<endl;
			}
			else
			{
				Node* cur =tail;
				while(tail->prevNode!=NULL)
				{
					cout<<cur->data<<endl;
					cur=cur->prevNode;
					
				}
			}
		}
		void insertionSort()
		{
			if(head==NULL)
			{
				cout<<"List is emplty.nothing to sort";
				return;
			}
			Node* current=head->nextNode;
			while(current!=NULL)
			{
				int key=current->data;
				Node* prevNod=cur->prev;
				while(prevNod!=NULL&&prevNod->data>key)
				{
					Node* nextNode=prevNod->nextNode;
					nextNode->data=prevNod->data;
					prevNod=prevNode->prevNode;
				}
				if(prevNod==NULL)
				{
					head->data=key;
				}
				else
				{
					Node* next=prevNod->nextNode;
					next->data=key;
				}
				current=current->nextNode;
			}
			
		}
};
int main()
{
	doubleLinkList l;
	l.insertNode(2);
	l.insertNode(77);
	l.inserAtFirst(1);
	l.inserAtPosition(11,0);
	l.deleteFirstNode();
	l.deleteNode();
	l.searchData(3);
	l.display();
	l.displayReverse();
}
