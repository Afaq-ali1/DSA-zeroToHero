#include <iostream>
using namespace std;
class Stack{
	int top=-1;
	int maxSize;
	int* stack;
	public:
		Stack(int size)
		{
			maxSize=size;
			stack=new int[maxSize];
		}
		bool isEmpty()
		{
			if(top < 0)
			{
				return true;
			}
				return false;
		}
		bool isFull()
		{
			if(top >= maxSize-1)
			{
				return true;
			}
				return false;
		}
		void push(int x)
		{
			if (isFull())
			{
				cout << "Cannot push "<< endl;
			}
			else
			{
				stack[++top] = x;
				cout << "Value : "<<x<<" pushed"<< endl;
			}
		}
		void pop()
		{
			if (isEmpty())
			{
				cout << "Stack is empty" << endl;	
			}
			else
			{
				int poppedValue =stack[top];
				cout << "Popped value "<<poppedValue << endl;
				cout << "Popped at index " << top << endl;
				top--;
			}
		}
		void display()
		{	
			cout << "Stack elements : ";
			for (int i = 0; i <= top; i++)
			{
				cout << stack[i] << " ";
			}
				cout << endl;
		}
};
int main()
{
	Stack s(5);
	s.push(22);
	s.push(23);
	s.push(24);
	s.push(24);
	s.push(24);
	s.display();
	s.pop();
	s.display();
	return 0;
}
