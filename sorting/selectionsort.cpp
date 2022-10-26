#include<iostream>
using namespace std;
void SelectionS(int arr[], int n)
{
	for(int i=0;i<n;i++)
	{
		int minIndex = i;
		for(int j=i+1;j<n;j++)
		{
			if(arr[minIndex]>arr[j])
			{
				minIndex = j;
			}
		}
		swap(arr[minIndex],arr[i]);
	}
}
int main()
{
	int arr[]= {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	int n = 10;
	SelectionS(arr, n);
	for(int i=0;i<10;i++)
	{
		cout<<arr[i]<<" ";
	}
}