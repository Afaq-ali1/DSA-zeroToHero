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
			if(data > current->data)
			{
				if(!current->right)
				{
					current->right = newNode;
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
	
	void deleteNode(Node* root,int key)
	{
		while(root!=NULL&&root->data!=key)
		{
			if(key < root->data)
			{
				root=root->left;	
			}
			else
			{
				root=root->right;
			}
		}
		if(root==NULL)
		{
			return;
		}	
		if(root->right==NULL&&root->left==NULL)
		{
			delete root;
			root=NULL;
		}
		else if(root->right==NULL)
		{
			Node* temp=root;
			root=root->left;
			delete temp;
		}
		
		if(root->left==NULL)
		{
			Node* temp=root;
			root=root->right;
			delete temp;
		}
		else
		{
			Node* temp=root->right;
			while(temp->left!=NULL)
			{
				temp=temp->left;
			}
			root->data=temp->data;
			if(!temp->right)
			{
				delete temp;
			}
			else
			{
				temp=temp->right;
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
	bst.insertNode(22);
	bst.insertNode(23);
	bst.insertNode(21);
	bst.insertNode(20);
	bst.deleteNode(bst.root,20);
	bst.display(bst.root);

}
