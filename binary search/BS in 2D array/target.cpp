#include<iostream>
using namespace std;
int lin(int arr[3][3], int n, int target)
{
    for(int i=0; i < n; i++)
    {
        for(int j=0; j < n; j++)
        {
            if(arr[i][j] == target)
            return true;
        }
    }
    return false;
}
int tar(int arr[3], int n, int target)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s)/2;
    while(s < e)
    {
        if(arr[mid] == target)
        {
            return true;
        }
        if(arr[mid] > target)
        {
            e = e - 1;
        }
        else{
            s = s + 1;
        }
    }
    return -1;
}
int main()
{
    int arr[3][3]={1,5,9,14,20,21,30,34,43};
    cout<<lin(arr, 9, 20)<<endl;
    cout<<tar(arr, 9, 20);
}