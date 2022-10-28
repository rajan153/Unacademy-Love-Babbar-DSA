#include<bits/stdc++.h>
using namespace std;
void cyclicallyRotate(int arr[], int n)
{
    int i = 0;
    int j = n - 1;
    while(i < j)
    {
        swap(arr[i], arr[j]);
        break;
    }
}
int main()
{
    int arr[]={9, 8, 7, 6, 4, 2, 1, 3};
    int n = 8;
    cyclicallyRotate(arr, n);
    for(int i=0;i<8;i++)
    {
        cout<<arr[i]<<" ";
    }
}