#include <iostream>
using namespace std;
struct Node{
		int data;
		Node* nextNode;
};
int main()
{
	Node *n3= new Node;
	n3->data= 3;
	n3->nextNode= NULL;
	
	Node *n2= new Node;
	n2->data= 2;
	n2->nextNode= n3;
	
	Node *n1= new Node;
	n1->data= 1;
	n1->nextNode= n2;
	
	Node *currentNode= n1;
	while(currentNode!= NULL)
	{
		cout<<"Data is: "<< currentNode->data <<endl;
		currentNode = currentNode->nextNode;
	}
	cout<<"All nodes are traversed"<<endl;
	delete n1;
	delete n2;
	delete n3;
}
