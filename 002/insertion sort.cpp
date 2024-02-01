#include<iostream>
using namespace std;
int main()
{
  int n=5;
  int arr[n]=[1,2,3,4,5];
  for(int i;i<n;i++)
  int min=i;
  int j=n+1;
  while(j<=0 && arr[j]>arr[min])
  {
    arr[min]=arr[j];
    j--;
  }
  arr[min]=arr[j];
  arr[j]=arr[j-1];
}