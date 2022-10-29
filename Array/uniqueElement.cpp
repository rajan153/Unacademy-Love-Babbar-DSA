#include<iostream>
using namespace std;
int uniqueElement(int arr[], int n)
{
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans = ans^arr[i];
    }
    return ans;
}
int main()
{
    int arr[] = {1,2,1,2,5};
    int n = 5;
    cout<<uniqueElement(arr,n);
}