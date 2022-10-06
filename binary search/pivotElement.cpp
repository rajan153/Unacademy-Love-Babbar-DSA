#include<iostream>
using namespace std;
//this is bruteforce technique 
// int pivotE(int arr[], int n, int target)
// {
//     for(int i=0; i<n; i++)
//     {
//         if(arr[i] == target)
//         {
//             return i;
//         }
//     }
//     return -1;
// }
// With Binary Search

// find Pivot and store it
int pivotEl(int arr[], int n)
{
    int s = 0;
    int e = n-1;
    int mid = s + (e - s)/2;
    while(s < e)
    {
        if(arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s)/2;
    }
    return s; // we can use e for end also.
}
// now finding binarysearch or positon
int binaryS(int arr[],int s, int e, int target)
{
    int mid = s + (e - s)/2;
    while(s < e)
    {
        if(arr[mid] == target)
        {
            return mid;
        }
        if(arr[mid] > target)
        {
            e = e - 1;
        }
        if(arr[mid] < target)
        {
            s = s + 1;
        }
        mid = s + (e - s)/2;
    }
    return -1;
}
int main()
{
    int arr[] = {5, 6, 7, 8, 9, 10, 1, 2, 3};
    int target = 3;
    int e = 9;
    int s = 0;
    // cout<<pivotE(arr,9,3)<<endl;
    int pivot = pivotEl(arr, 9); // pivot store

    //now comparing the condition
    if(target >= pivot && target <= e)
    {
        cout<<binaryS(arr, 0, pivot, target);
    }
    else
    {
        cout<<binaryS(arr, pivot, 9, target);
    }
}