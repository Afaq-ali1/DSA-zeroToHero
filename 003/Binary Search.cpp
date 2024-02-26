#include <iostream>
using namespace std;
class Method
{
	public:	
	int binarySearch(int arra[],int size,int target )
	{
		int left =0;
		int right=size-1;
		int mid= left+(right-left)/2;
		while(left<=right)
		{
			if(arra[mid]==target)
			{
				return mid;
			}
			else if(target>arra[mid])
  			{
  				left=mid+1;
			}
			else
  			{
  				right=mid-1;
			}
			return -1;	
		}
	}
};
int main()
{
	Method m;
	int arr[] ={1,2,3,4,5,6,7,8,9,10};
	int n = sizeof(arr)/sizeof(arr[0]);
		int t=5;
		cout<<m.binarySearch(arr,n,t);
}
