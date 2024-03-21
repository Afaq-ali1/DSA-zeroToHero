#include <iostream>
#define maxSize 5
using namespace std;
class Stack
{
	int top=-1;
	int mintop=-1;
	int stack[maxSize];
	int minStack[1000];
	public:
		void push(int value)
		{
			if(top>=maxSize-1)
			{
				cout<<"is full";
			}
			stack[++top]=value;
			if(mintop==-1|| value <=minStack[mintop])
			{
				minStack[++mintop]=value;
			}
		}
		void pop()
		{
			if(top<0)
			{
				cout<<"cant pop";
				return;	
			}
			if(stack[top]==minStack[mintop])
			{
				mintop--;
			}
			top--;
		}
		void diplay()
		{
			for(int i=0;i<=top;i++)
			{
				cout<<stack[i]<<" ";
			}
		}
		int getmin()
		{
			if(mintop<0)
			{
				cout<<"is empty";
				return -1;
			}
			return minStack[mintop];
		}
};
int main()
{
	Stack s;
	s.push(2);
	s.push(3);
	s.push(1);
	s.push(4);
	s.diplay();
	cout<<"\nsmallest"<<s.getmin();
}
