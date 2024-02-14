#include <iostream>
using namespace std;
class Method
{
	public:	
	void shellSort(int arra[],int n)
	{
		int phase=1;
		for(int gap=n/2;gap>0;gap/=2)
		{
			cout<<"  	Phase numer: "<<phase<<endl;
			cout<<"	gap is "<<gap<<endl;
			for(int i=gap;i<n;i++)
			{
				int min = arra[i];
				int j=i-gap;
				while(j>=0&&arra[j]>min)
				{
					arra[j+gap]=arra[j];
					cout<<"["<<j<<"]"<<"-->"<<"["<<j+gap<<"]"<<endl;
					j-=gap;
				}
				arra[j+gap]=min;
			}
			phase++;
		}
	}
	void display(int arra[],int n)
	{
		for(int i=0;i<n;i++)
		{
			cout<<arra[i]<<" ";
		}
		cout<<endl;
	}
};
int main()
{
	Method m;
	int arr[] ={7,6,9,4,5,6,6,7,3,1};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<"Array is:"<<endl;
	m.display(arr,n);
	m.shellSort(arr,n);
	cout<<endl;
	cout<<"Sorted Array is:"<<endl;
	m.display(arr,n);
}
