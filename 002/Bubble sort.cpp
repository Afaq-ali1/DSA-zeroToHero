#include <iostream>
using namespace std;
class Sort{
	public:
		bool swap;
	void bubbleSort(int arr,int size)
	{
		int outer=0,inner=0;
		for(int i=0;i<size-1;i++)
		{
			swap=false;
			for(int j=0;j<size-i-1;j++)
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
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
	
	void display(int arr,int size)
	{
		for(int i=0;i<size;i++)
		{
			cout<<arr[i]<<" ";
		}	
	}
};
int main()
{
	
	int array[5] = {64, 25, 12, 22, 11};
	int n=sizeof(arr)/sizeof(arr[0]);
	Sort s;
	cout<<"Before sorting:"<<endl;
	s.display(array,n);
	s.bubbleSort(array,n);
}
