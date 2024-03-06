#include <iostream>
using namespace std;
class Queue
{
	public:
		static const int size=5;
	int front,rear;
	int que[size];
		Queue()
		{
			front=-1;
			rear=-1;
		}
		bool isFull()
		{
			if(front==0&&rear==size-1)
			{
				return true;
			}
			return false;
		}
		bool isEmpty()
		{
			if(front==-1)
			{
				return true;
			}
				return false;
		}
		void enQueue()
		{
			int element;
			if (isEmpty())
			{
				cout<<"Queue is empty"<<endl;
				return ;
			}
			else
			{
				if(front==-1)
				{
					front=0;
				}
				rear++;
				que[rear]=element;
				cout<<"Inserted"<<element<<endl;
			}
		}
		void DeQueue()
		{
			int element;
			if(isEmpty())
			{
				cout<<"Queue is empty!"<<endl;
				return ;
			}
			else
			{
				element=que[front];
				if(front>=rear)
				{
					front=-1;
					rear=-1;
				}
				else
				{
					front++;
				}
			}
			cout<<"Deleted->"<<element<<endl;
		}
		void display()
		{
			if (isEmpty())
			{
				cout<<"Empty Queue"<<endl;
			}
			else
			{
				for(int i=front;i<=rear;i++)
				{
					cout<<que[i]<<" ";
				}	
			}
		}
};
int main()
{
	Queue q;
	q.enQueue(1);
	q.DeQueue();
	q.display();	
}	
