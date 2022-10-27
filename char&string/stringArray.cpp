// #include<iostream>
// using namespace std;
// int main()
// {
//     //taking input array and print the char array
//     char arr[5];
//     cin>>arr;
//     cout<<"Output is Here: "<<arr;
// }

// find he length of string
#include<bits/stdc++.h>
using namespace std;
int lengthPrint(char arr[])
{
	int length = 0;
	int index = 0;
	while(arr[index] != '\0')
	{
		length++;
		index++;
	}
	return length;
}
int main()
{
	char arr[] = "Rajan";
    cout<<arr<<endl;
	cout<<"Output is Here: "<<lengthPrint(arr)<<endl; //print function
    cout<<strlen(arr); //using pre-define function 
}