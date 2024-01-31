#include <iostream>
using namespace std;
class Sort{
	public:
		int arr[5] = {64, 25, 12, 22, 11};
		int n=sizeof(arr)/sizeof(arr[0]);
	void selectonSort()
	{
		int outer=0,inner=0;
		for(int i=0;i<n-1;i++)
		{
			outer++;
			cout<<"Outer loop:"<<outer<<endl;	
			int min=i;
			for(int j=i+1;j<n;j++)
			{
				inner++;
				cout<<"Inner loop:"<<inner<<endl;
				if(arr[j]<arr[min])
				{
					min=j;
				}
			}
			inner=0;
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
