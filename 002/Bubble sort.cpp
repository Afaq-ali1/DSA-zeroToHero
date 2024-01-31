#include <iostream>
using namespace std;
class Sort{
	public:
		int arr[5] = {64, 25, 12, 22, 11};
		int n=sizeof(arr)/sizeof(arr[0]);
		bool swap;
	void selectonSort()
	{
		int outer=0,inner=0;
		for(int i=0;i<n-1;i++)
		{
			swap=false;
			for(int j=0;j<n-i-1;j++)
			{
				if(arr[j]>arr[j+1])
				{		
					int temp=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=temp;		
	
				swap=true;		
				}
			}
			
		if(swap==false)
		{
			break;
		}
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
