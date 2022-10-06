// #include<iostream>
// using namespace std;
// void printA(int arr[],int size){
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// void util(int arr[], int size){
//     arr[0]=25;
//     cout<<"util Fun: "<<" ";
//     printA(arr,5);
// }
// int main()
// {
//     // int arr[3]={1,2,3};
//     // printA(arr,3);
//     int arr[5]={5,6,7,8,9};
//     util(arr,5);
//     cout<<"Main: "<<" ";
//     printA(arr,5);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int n;
// bool search(int arr[],int size, int target)
// {
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]==target)
//         {
//             return true;
//         }
//     }
//         return false;
// }
// int main()
// {
//     int arr[50];
//     cout<<"Enter the Number of Array: "<<" ";
//     cin>>n;
//     for(int i=1;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     if(search(arr,5,2))
//     {
//         cout<<"Element Found !";
//     }
//     else
//     {
//         cout<<"Element Not Found !";
//     }
//         return 0;
// }

// ----------------Reverse Array----------------------X
// #include<iostream>
// using namespace std;
// void reverseArr(int arr[],int n)
// {
//     int i=0;
//     int j=n-1;
//     while(i<j){
//         swap(arr[i],arr[j]);
//         i++;
//         j--;
//     }
// }
// int main()
// {
//     int arr[6]={6,7,1,3,4,9};
//     reverseArr(arr,6);
//     for(int i=0;i<6;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// -----------------------input array from user-------------------------X
// #include<iostream>
// using namespace std;
// void rev(int arr[], int size)
// {
//     int i=0;
//     int j=size-1;
//     while(i<j)
//     {
//         swap(arr[i],arr[j]);
//         i++;
//         j--;
//     }
// }
// int main()
// {
//     int arr[6];
//     cout<<"Enter the value of Array: ";
//     for(int i=0;i<6;i++)
//     {
//         cin>>arr[i];
//     }
//     cout<<endl;
//     for(int i=0;i<6;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     cout<<"Your Array is Reverse Here"<<endl;
//     rev(arr,6);
//     for(int i=0;i<6;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// -------------------------------find maximum number------------------------------------X
// #include<iostream>
// using namespace std;
// int getMaxNum(int arr[],int size)
// {
//     int ans=INT_MIN;
//     for(int i=0;i<6;i++)
//     {
//         ans=max(ans,arr[i]);
//     }
//     cout<<"Maximun number is: "<<ans<<endl;
//     return ans;
// }
// int main()
// {
//     int arr[6]={4,8,9,7,5,6};
//     getMaxNum(arr,6);
// }

// ------------------------------Find Minimum NUmber--------------------------------------X
// #include<iostream>
// using namespace std;
// void getMinValue(int arr[],int size)
// {
//     int ans=INT_MAX;
//     {
//     for(int i=0;i<6;i++)
//         ans=min(ans,arr[i]);
//     }
//     cout<<"Minimum Values is: "<<ans;
// }
// int main()
// {
//     int arr[6]={5,7,8,1,4,3};
//     getMinValue(arr,6);
//     return 0;
// }

// --------------------------Swap alternative elements---------------------------------------X
// #include<iostream>
// using namespace std;
// void alternativeElementSwap(int arr[],int size)
// {
//     int i=0;
//     while(i<size)
//     {
//         if(i+1<size)
//         {
//             swap(arr[i],arr[i+1]);
//         }
//         i=i+2;
//     }
// }
// int main()
// {
//     int arr[8]={2,7,5,6,9,8,7,6};
//     alternativeElementSwap(arr,8);
//     for(int i=0;i<8;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }

// ---------------------------------Sorting array---------------------------------------------X
// #include<iostream>
// using namespace std;
// void sortArray(int arr[],int size)
// {
//     int zero=0;
//     int one=0;
//     int two=0;
//     for(int i=0;i<size;i++)
//     {
//         if(arr[i]==0)
//             zero++;
//         else if(arr[i]==1)
//             one++;
//         else
//             two++;
//     }
//     int i=0;
//     while(zero--){
//         arr[i]=0;
//         i++;
//     }
//     while(one--)
//     {
//         arr[i]=1;
//         i++;
//     }
//     while(two--)
//     {
//         arr[i]=2;
//         i++;
//     }
// }
// int main()
// {
//     int arr[]={1,0,2,2,0,1,1};
//     sortArray(arr,7);
//     for(int i=0;i<7;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }

//---------------------------------Check Palindrome--------------------------------------X
// #include<iostream>
// using namespace std;
// bool palindrome(int arr[],int size)
// {
    // int i=0,j=size-1;
    // while(i<j)
    // {
    //     if(arr[i]==arr[j])
    //     {
    //         i++;
    //         j--;
    //     }
    //     else{
    //     return false;}
    // }
    // return true;
// }
// int main()
// {
//     int arr[]={1,2,3,3,2,1};
//     cout<<palindrome(arr,6);
// }

//---------------------------------------Union-------------------------------------------X
// #include <iostream>
// using namespace std;
// void uni(int arr[], int arr2[], int n, int m)
// {
//     int i = 0;
//     int j = 0;
//     while (i < n && j < m)
//     {
//         if (arr[i] < arr2[j])
//         {

//             cout << arr[i++];
//         }
//         else if (arr[i] == arr2[j])
//         {
//             cout << arr[i++] << arr2[j++];
//         }
//         else
//         {

//             cout << arr[j++];
            
//         }
//     }
//     while (i < n)
//     {
//         cout << arr[i++] << " ";
//     }
//     while (j < m)
//     {
//         cout << arr[j++] << " ";
//     }
// }
// int main()
// {
//     int arr[] = {2, 3, 5, 7};
//     int arr2[] = {3, 4, 5, 6, 7};
//     uni(arr, arr2, 4, 5);
// }

// -------------------------Negitive number and positve number----------------------------X
#include<iostream>
using namespace std;
void negitiivePositiveNum(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            swap(arr[i],arr[i+1]);
            i++;
        }
        else{
            i++;
        }
    }
}
int main()
{
    int arr[]={3,-1,2,-4,-6,-4,5};
    negitiivePositiveNum(arr,7);
    for(int i=0;i<7;i++)
    {
        cout<<arr[i]<<" ";
    }
}

// ------------i am find this approch of negitve all number at one side----------------------------X
// #include<iostream>
// using namespace std;
// void negArray(int arr[], int n)
// {
// 	int i=0;
// 	int j=0;
// 	int z=n-1;
// 	while(j<z)
// 	{
// 		if(arr[i]<=0)
// 		{
// 			swap(arr[j],arr[i]);
// 			j++;
// 			i++;
// 		}
// 		else if(arr[i]>0)
// 		{
// 			swap(arr[z],arr[i]);
// 			z--;
// 		}
// 	}
// }
// int main(){
// 	int arr[]={3,-1,2,-4,-6,-4,5};
// 	negArray(arr,7);
// 	cout<<"Negitive NUmber one side :  ";
// 	for(int i=0;i<7;i++)
// 	{
// 		cout<<arr[i]<<" ";
// 	}
// }

//-------------------Kandane`s Algo---------------------X
// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;
// int getMaxSubarraySum(int arr[], int n)
// {
//     int min=INT_MIN;
//     int p=0;
//     for(int i=0;i<n;i++)
//     {
//         p=p+arr[i];
//         min=max(min,p);
//         if(p<0)
//         p=0;
//     }
//     return min;
// }
// int main()
// {
//     int arr[]={-2,-3,4,-1,-2,1,-5,-3};
//     cout<<"Result here: "<<getMaxSubarraySum(arr,9);
// }

//----------------------Target Number(Liner Search)-----------------------X
// #include<iostream>
// using namespace std;
// bool findTar(int arr[], int size, int target)
// {
//     for(int i=0;i<size;i++)
//     {
//         if(arr[i]==target)
//         {
//             return true;
//         }
//     }
//     return false;
// }
// int main()
// {
//     int arr[]={2,3,4,5,6,7};

//     if(findTar(arr,6,4))
//     {
//         cout<<"Element Found...";
//     }
//     else{
//         cout<<"Element Not Found...";
//     }
// }














