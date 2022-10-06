#include<iostream>
using namespace std;
// This is a leetcode premium question.
// i will try it with the help of brutefore method here
// time Complexity is O(N).
// https://practice.geeksforgeeks.org/problems/value-equal-to-index-value1330/1
int fixedPoint(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==i)
        return i;
    }
        return false;
}

//Here is program run with Binary Search 
int fixedPointB(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    // find mid
    int mid = s+(e - s)/2;
    while(s<=e)
    {
        if(arr[mid] == mid)
        {
            return mid;
        }
        if(arr[mid] > mid)
        {
            e = mid -1;
        }
        if(arr[mid] < mid)
        {
            s = mid + 1;
        }
        mid = s+(e - s)/2;
    }
    return -1;
}
int main()
{
    int arr[]={-10, -5, 0, 3, 7};
    cout<<fixedPoint(arr,5)<<endl;
    cout<<fixedPointB(arr, 5);
}