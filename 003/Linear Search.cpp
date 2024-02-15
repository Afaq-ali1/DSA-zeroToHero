#include <iostream>
using namespace std;
class Method
{
	public:
	void linarSearch(int array[],int size,int num)
	{
		bool check=false;
		cout<<"Number: "<<num<<endl;
		for(int i=0;i<size;i++)
		{
			if(array[i]==num)
			{	
				cout<<"Found at index: "<<i;
				check=true;
				break;
			}
		}
		if(check==false)
  		{
			cout<<"Not found in the array!!";
		}
	}
		 
	void display(int array[],int size)
	{
		for(int i=0;i<size;i++)
		{
			cout<<array[i]<<" ";
		}
			cout<<endl;
	}	
};
int main()
{
	Method m;
	int arr[] ={7,6,9,4,5,6,6,7,3,1};
	int n = sizeof(arr)/sizeof(arr[0]);
		cout<<"Array is :"<<endl;
		m.display(arr,n);
		m.linarSearch(arr,n,5);
}
