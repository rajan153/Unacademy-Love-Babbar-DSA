#include<bits/stdc++.h>
using namespace std;
void insertionSort(int arr[], int n)
{
    for(int i=1;i<n;i++)
    {
        int position = arr[i];
        int j = i-1;
       while(arr[j] > position)
       {
        arr[j + 1] = arr[j];
        j--;
       }
       arr[j + 1] = position;
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    // int arr[] = {2,8,1,3,6,7,5,4};
    // int n = 8;
    insertionSort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}