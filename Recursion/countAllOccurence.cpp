#include<iostream>
using namespace std;
int countAllOccurence(int arr[], int n, int index, int target, int& cnt)
{
	if(arr[index] == target)
	{
		cnt = cnt + 1;
	}
	if(index == n)
	{
		return -1;
	}
	return countAllOccurence(arr, n, index+1, target, cnt);
}
int main()
{
	int arr[] = {1,3,4,2,5,4,2,2,1};
	int n = 9;
	int target = 2;
	int index = 0;
	int cnt = 0;
	countAllOccurence(arr, n, index, target, cnt);
	cout<<cnt;
}