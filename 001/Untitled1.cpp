#include <iostream>
using namespace std;
int main()
{
	int arr1[3]={1,2,3};         // Time Complexity: O(1)
	int arr2[3]={4,5,6};         // Time Complexity: O(1)
	int arr3[3];         // Time Complexity: O(1)
	int n=3;
	for(int i=0;i<n;i++)
	{
		arr3[i]=arr1[i]+arr2[i];	// Time Complexity: O(n) // it is formally O(1)
	}
	for(int i=0;i<3;i++)
	{
		cout<<arr3[i]<<" ";	// Time Complexity: O(n) // it is formally O(1)
	}
}
