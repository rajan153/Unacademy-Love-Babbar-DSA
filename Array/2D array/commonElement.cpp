#include<bits/stdc++.h>
using namespace std;
int commonElement(int arr[], int arr1[], int arr2[], int n, int m, int o)
{
    int i=0;
    int j=0;
    int k=0;
    while(i < n && j < m && k < o)
    {
        if(arr[i] == arr1[j] && arr1[j] == arr2[k])
        {
            cout<<arr[i]<<" ";
            i++;
            j++;
            k++;
        }
        else if(arr[i] < arr1[j])
        {
            i++;
        }
        else if(arr1[j] < arr2[k])
        {
            j++;
        }
        else
        {
            k++;
        }
    }
}
int main()
{
    int arr[] = {1, 5, 10, 20, 40, 80};
    int arr1[] = {6, 7, 20, 80, 100};
    int arr2[] = {3, 4, 15, 20, 30, 70, 80, 120};
    commonElement(arr, arr1, arr2, 6, 5, 8);
}