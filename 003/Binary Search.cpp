#include <iostream>
using namespace std;
class Method
{
	public:	
	int binarySearch(int sortedArray[],int n,int target) 
{
    int low = 0;                                                                            // O(1)
    int high = n - 1;

    while (low <= high) // This loop runs log(n) times, where n is the size of the Sorted Array
    {
        int mid = low + (high - low) / 2;                                       // O(1)
        cout<<"low: "<<low<<endl;
        cout<<"high: "<<high<<endl;
        	cout<<"mid is "<<mid<<endl;
        if (sortedArray[mid] == target)                                        // O(1)
        {
        	cout<<"run if"<<endl;
            return mid;                                                                    // O(1)
        } 
        else if (sortedArray[mid] < target)                                   // O(1)
        {        	
        	cout<<"run else if"<<endl;
            low = mid + 1;           
		} 
        else {   high = mid - 1;}                                                    // O(2)
    }
    return -1; // This operation is O(1)
}


};
int main()
{
	Method m;
	int arr[] ={11,12,13,14};
	int n = sizeof(arr)/sizeof(arr[0]);
		int targetNumber=13;
		cout<<"found at Index: "<< m.binarySearch(arr,n,targetNumber);
}
