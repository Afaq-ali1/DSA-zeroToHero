#include <iostream>
using namespace std;
struct Node
{
	int data;
	Node* nextNode;
};
int main()
{
	Node n3;
	n3.data=3;
	n3.nextNode=NULL;
	
	Node n2;
	n2.data=2;
	n2.nextNode=&n3;
	
	Node n1;
	n1.data=1;
	n1.nextNode=&n2;
	Node* curNode= &n1;
}
