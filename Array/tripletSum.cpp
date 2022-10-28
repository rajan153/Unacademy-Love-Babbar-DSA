#include<bits/stdc++.h>
using namespace std;
int tripletSum(int arr[], int n, int sum)
{
    for(int i=0; i < n-2; i++)
    {
       for(int j = i+1; j < n-1; j++)
       {
            for(int k = j + 1; k < n; k++)
            {
                if(arr[i]+arr[j]+arr[k] == sum)
                cout<<"Triplet is "<<arr[i]<<","<<arr[j]<<","<<arr[k];
                // return true;
            }
       }
    }
    return false;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int sum = 9;
    int n = 5;
    cout<<tripletSum(arr, n ,sum);
}