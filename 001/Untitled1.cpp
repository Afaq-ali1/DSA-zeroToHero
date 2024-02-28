#include <iostream>
using namespace std;
class Method{
	int isEven;
	int isOdd;
	int sum=0;
	public:
	void findPairs(int arr[],int n)
	{
		for(int i=0;i<n;i++)
		{
				if(arr[i]%2==0)
				{
					sum+=arr[i];	
				}
		}
		
				cout<<"sum is: "<<sum<<endl;
		
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
					if(arr[i]*arr[j]>=sum)
					{
						cout<<arr[i]<<"*"<<arr[j]<<" ";
					}
			}
		}
	}

};
int main()
{
	Method m;
	int n=7;
	int arr1[n]={5,6,4,2,12,7,9};
	m.findPairs(arr1,n);
}
