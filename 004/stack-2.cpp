#include <iostream>
using namespace std;
class Stack
{
	int top=-1;
	int maxSize;
	int* stack;
    	public:
		Stack(int size)
		{
			maxSize =size;
			stack = new int[maxSize];
		}	
		bool isEmpty()
		{
			if (top <0)
			{
				return true;
			}	
				return false;	
		}
	bool isFull()
	{
		if ( top >=maxSize- 1)
		{
			return true;
		}
		return false;
	}

	void push(int x)
	{
		if (isFull())
		{
			cout << "Cannot push " << endl;
		}
		else
		{
			stack[++top] = x;
			cout << "Value : "<<x<<" pushed" << endl;
		}	
	}
	void pop()
	{
		if (isEmpty())
		{
			cout << "Stack is emplty" << endl;	
		}
		else
		{
			int poppedValue =stack[top];
			cout << "Popped value "<<poppedValue << endl;
			cout << "Popped at index " << top << endl;
			top--;
		}
	}
	void count()
	{
		int total =top + 1;
		cout << "Total elements in stack: " << total<< endl;
	}
	void peek(int pos)
	{
		if (pos< 0 || pos>top)
		{
			cout << "Position not in range" << endl;
		}
		else
		{
			int value = stack[pos];
			cout << "Element at"<< value << endl;
		}
	}
	void change(int pos, int val)
	{
		if (pos<0 || pos>top)
		{
			cout << "Position not in range" << endl;
		}
		else
		{
			stack[pos] = val;
			cout << "Value at position changed" << endl;
		}
	}
	
	void search(int val)
	{
		bool found =false; 
		for (int i=0;i< top;i++)
		{
			if (stack[i] == val)
			{
				cout<<"Value " <<val<<" found at position "<<i<<" in the stack" << endl;
				found = true;
				break;
			}
		}
	if (! found)
		{ 
			cout << "Value "<< val << "not found" << endl;
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
	~Stack()
	{
		delete[] stack;
	}
};
int main()
{
	Stack s(5);
	s.push(4);
	s.push(5);
	s.push(6);
	s.push(7);
	s.push(8);
	s.count();
	s.display();
	s.pop();
	s.display();
	s.count();
	return 0;
}
