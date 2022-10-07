#include<iostream>
using namespace std;
bool doubleExits(int arr[], int n)
{
//	bruteforce technique
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(arr[i] == 2*arr[j])
			return true;
		}
	}
	return false;
}
int main()
{
	int arr[] = {10, 2, 5, 3};
	cout<<doubleExits(arr, 4);
}