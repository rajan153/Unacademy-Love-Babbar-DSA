// only work for odd number
// #include<iostream>
// using namespace std;
// void reverseA(int arr[], int n)
// {
//     int start=0;
//     int end=n-1;
//     while(start<end)
//     {
//         for(int i=0;i<n;i++)
//         {
//             swap(arr[start],arr[end]);
//         }
//         start++;
//         end--;
//     }
// }
// int main()
// {
//     int arr[5]={1,2,3,4,5};
//     reverseA(arr,5);
//     for(int i=0;i<5;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }

#include<iostream>
using namespace std;
void reverseArr(int arr[],int n)
{
    int i=0;
    int j=n-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}
int main()
{
    int arr[6]={6,7,1,3,4,9};
    reverseArr(arr,6);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}