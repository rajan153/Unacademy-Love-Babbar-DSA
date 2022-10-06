// #include<bits\stdc++.h>
#include<iostream>
using namespace std;
void linearSearch(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[]={5,6,8,7,9,2};
    linearSearch(arr,6);
}