#include <iostream>
using namespace std;
class Sort{
	public:
		int arr[5] = {64, 25, 12, 22, 11};
		int n=sizeof(arr)/sizeof(arr[0]);
	void selectonSort()
	{
		for(int i=0;i<n-1;i++)
		{
			int min=i;
			for(int j=i+1;j<n;j++)
			{
				if(arr[j]<arr[min])
				{
					min=j;
				}
			}
			int temp=arr[i];
			arr[i]=arr[min];
			arr[min]=temp;
		}
			cout<<"After sorting:"<<endl;
			
		for(int i=0;i<n;i++)
		{
			cout<<arr[i]<<endl;
		}
	}
	
	void display()
	{
		for(int i=0;i<n;i++)
		{
			cout<<arr[i]<<endl;
		}	
	}
};
int main()
{
	Sort s;
	cout<<"Before sorting:"<<endl;
	s.display();
	s.selectonSort();
}
