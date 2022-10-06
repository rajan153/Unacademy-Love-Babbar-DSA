#include<iostream>
using namespace std;
int firstoccurrence(int arr[], int n, int target)
{
    int s=0;
    int e=n-1;
    int ans;
    int mid=s+(e-s)/2;
    while (s<=e)
    {
        if(arr[mid] == target)
        {
            ans = mid;
            e = mid-1;
        }
        if(arr[mid] > target)
        {
            e = mid - 1;
        }
        if(arr[mid] < target)
        {
            s = mid + 1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main()
{
    int arr[]={3,4,5,5,5,5,8,12};
    cout<<firstoccurrence(arr,8,5);
}