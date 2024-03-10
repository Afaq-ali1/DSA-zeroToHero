#include <iostream>
#define size 3
using namespace std;
class Queue
{
	public:
//		static const int size=3;
	int front,rear;
	int queue[size];
		Queue()
		{
			front=-1;
			rear=-1;
		}
		bool isFull()
		{
		int maxSize=size; 
			if((rear+1)%maxSize==front)
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
				cout<<"Queue is full"<<endl;
			}
			else
			{
				if(front==-1)
				{
					front=0;
				}
				rear=(rear+1)%size;
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
				if(front==rear)
				{
					front=-1;
					rear=-1;
				}
				else
				{
					front=(front+1)%size;
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
				for(int i=front;i!=rear;i=(i+1)%size)
				{
					cout<<queue[i]<<" ";
				}
					cout<<queue[rear];
			}
		}
};
int main()
{
	Queue q;
	q.enQueue(1);
	q.enQueue(2);
	q.enQueue(3);
	q.DeQueue();
	q.enQueue(8);
	q.display();
}	
