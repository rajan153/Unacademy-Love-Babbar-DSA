// #include<iostream>
// using namespace std;
// int main()
// {
// 	int arr[3][3]={1,2,3,4,5,6,7,8,9};
// 	int n=3;
// 	for(int i=0;i<n;i++)
// 	{
// 		for(int j=0;j<n;j++)
// 		{
// 			cin>>arr[i][j];
// 		}
// 	}
// 	cout<<"Output is Here: "<<endl;
// 	for(int i=0;i<n;i++)
// 	{
// 		for(int j=0;j<n;j++)
// 		{
// 			cout<<arr[i][j]<<" ";
// 		}
// 		cout<<endl;
// 	}
// }

// #include<iostream>
// using namespace std;
// int main()
// {
// 	int arr[4][2]={{1,2},{2,3},{3,4},{4,5}};
// 	for(int i=0;i<4;i++){
// 		for(int j=0;j<2;j++)
// 		{
// 			cout<<arr[i][j]<<" ";
// 		}
// 		cout<<endl;
// 	}
// }

// ---------------------Find Target in 2D Array-----------------------------X
// #include<iostream>
// using namespace std;
// bool findTarget(int arr[3][3] /* column value is Needed, but row value not Needed */,int n, int target)
// {
// 	int i=0;
// 	for(int i=0;i<n;i++)
// 	{
// 		for(int j=0;j<n;j++)
// 		{
// 			if(arr[i][j]==target)
// 			return true;
// 		}
// 	}
// 		return false;
// };
// int main()
// {
// 	int arr[3][3]={5,1,3,4,6,8,10,9,11};
// 	// if(findTarget(arr,9,13))
// 	// {
// 	// 	cout<<"Element Found";
// 	// }
// 	// else{
// 	// 	cout<<"Element Not Found";
// 	// }
// 	cout<<findTarget(arr,9,11);
// }

// ----------------------Sum of Column------------------------X
// #include<iostream>
// using namespace std;
// void sumC(int arr[3][4],int row,int col)
// {
// 	cout<<"Sum of Column is "<<endl;
// 	for(int i=0;i<col;i++)
// 	{
// 		int sum=0;
// 		for(int j=0;j<row;j++)
// 		{
// 			sum=sum+arr[j][i];
// 		}
// 		cout<<sum<<" ";
// 	}
// }
// int main()
// {
// 	int arr[3][4]={3,5,11,2,7,9,8,0,5,0,1,3};
// 	sumC(arr,3,4);
// }

// -------------------------Sum of Row-------------------------------X
// #include<iostream>
// using namespace std;
// void sumR(int arr[3][4], int row ,int col)
// {
// 	for(int i=0;i<row;i++)
// 	{
// 		int sum=0;
// 		for(int j=0;j<col;j++)
// 		{
// 			sum=sum+arr[i][j];
// 		}
// 		cout<<sum<<" ";
// 	}
// }
// int main()
// {
// 	int arr[3][4]={3,5,11,2,7,9,8,0,5,0,1,3};
// 	sumR(arr,3,4);
// }

// ------------------------Find Max In Column-----------------------------------X
// #include<iostream>
// using namespace std;
// int findMax(int arr[3][4],int row, int col)
// {
// 	int maxi=INT_MIN;
// 	for(int i=0;i<col;i++)
// 	{
// 		int sum=0;
// 		for(int j=0;j<row;j++)
// 		{
// 			sum=sum+arr[j][i];
// 			maxi=max(maxi,sum);
// 		}
// 	}
// 	return maxi;
// }
// int main()
// {
// 	int arr[3][4]={3,5,11,2,7,9,8,0,5,0,1,3};
// 	cout<<findMax(arr,3,4);
// }

// ----------------------------------Rotate 90 degree-----------------------------------------X
// #include<iostream>
// using namespace std;
// void transpose(int arr[3][3],int row,int col)
// {
	// Transpose Here
// 	for(int i=0;i<row;i++)
// 	{
// 		for(int j=0;j<i;j++)
// 		{
// 			swap(arr[i][j],arr[j][i]);
// 		}
// 	}
	// Reverse is Here
// }
// int main()
// {
// 	int arr[3][3]={1,2,3,4,5,6,7,8,9};
// 	transpose(arr,3,3);
// 	for(int i=0;i<3;i++)
// 	{
// 		for(int j=0;j<3;j++)
// 		{
// 			cout<<arr[i][j]<<" ";
// 		}
// 		cout<<endl;
// 	}
// }

//------------------------Spiral Matrix--------------------------------X
#include<iostream>
using namespace std;
void spiral(int arr[4][4], int row, int col)
{
	int i=0;
	int j=0;
	
	for(int i=1;i<col;i++)
	{
		cout<<arr[i]<<" ";
	}
	i++;
}
int main()
{
	int arr[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
	spiral(arr,4,4);
	return 0;
}