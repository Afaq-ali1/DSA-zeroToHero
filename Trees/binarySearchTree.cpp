#include <iostream>
using namespace std;
struct Node{
	int data;
	Node *left;
	Node *right;
};
class BST{
	public:
	Node* root=NULL;
	void insertNode(int data)
	{
		Node* newNode=new Node;
		newNode->data=data;
		newNode->left=NULL;
		newNode->right=NULL;
		if(!root)
		{
			root=newNode;
			return;
		}
		Node* current=root;
		while(true)
		{
			if(data>current->data)
			{
				if(!current->right)
				{
					current->right=newNode;
					return;
					
				}
				current=current->right;
			}
			else
			{
				if(!current->left)
				{
					current->left=newNode;
					return;
				}
				current=current->left;
			}
		}
	}
	void display(Node* current)
	{
		if(current)
		{
			display(current->left);
			cout<<current->data<<" ";
			display(current->right);
		}
	}
};
int main()
{
	BST bst;
	bst.insertNode(12);
	bst.insertNode(32);
	bst.insertNode(21);
	bst.insertNode(52);
	bst.display(bst.root);
}
