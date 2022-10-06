#include<iostream>
using namespace std;
int minN(int arr[], int n)
{
    int ans=INT_MAX;
    for(int i=0;i<n;i++)
    {
        ans=min(ans,arr[i]);
    }
    return ans;
}
int maxN(int arr[], int n)
{
    int ans=INT_MIN;
    for(int i=0;i<n;i++)
    {
        ans=max(ans,arr[i]);
    }
    return ans;
}
int main()
{
    int arr[6]={9,1,7,6,1,3};
    cout<<minN(arr,6)<<endl;
    cout<<maxN(arr,6);
}