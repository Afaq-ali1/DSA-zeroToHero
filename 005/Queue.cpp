#include <iostream>
#define size 5
using namespace std;
class Queue
{
	public:
	int front,rear;
	int queue[size];
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
		void enQueue(int element)
		{
			if (isFull())
			{
				cout<<"Queue is Full"<<endl;
			}
			else
			{
				if(front==-1)
				{
					front=0;
				}
				rear++;
				queue[rear]=element;
				cout<<"Inserted "<<element<<endl;
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
				element=queue[front];
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
					cout<<queue[i]<<" ";
				}	
			}
		}
};
int main()
{
	Queue q;
	q.enQueue(1);
	q.enQueue(2);
	q.enQueue(3);
	q.enQueue(4);
	q.enQueue(5);
	q.DeQueue();
	q.DeQueue();
	q.DeQueue();
	q.enQueue(6);
	q.display();	
}	
