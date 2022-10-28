#include<bits/stdc++.h>
using namespace std;
void arrayIntersection(int arr[], int arr1[], int n, int m)
{
	int i = 0;
	int j = 0;
	set<int> s;
	while(i < n && j < m)
	{
		if(arr[i] < arr1[j])
		{
			i++;
		}
		else if(arr[i] > arr1[j])
		{
			j++;
		}
		else
		{
			s.insert(arr1[j]);
			i++;
			j++;
		}
	}
	for(auto m: s)
	{
		cout<<m<<" ";
	}
}
int main()
{
	int arr[] = { 1, 2, 2, 3, 4 };
    int arr1[] = { 2, 2, 4, 6, 7, 8 };
    int n = 5;
    int m = 6;
    arrayIntersection(arr,arr1,n,m);
}