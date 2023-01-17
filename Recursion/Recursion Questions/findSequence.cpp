#include<iostream>
using namespace std;
void findSequence(int leftSide,int rightSide, char* output,int i, int j)
{
	if(i > j)
	{
		if(leftSide == rightSide)
		{
			cout << output << endl;
		}
			return;
	}
	//put 0 0
	output[i] = '0';
	output[j] = '0';
	findSequence(leftSide, rightSide, output, i+1, j-1);
	//put 0 1
	output[i] = '0';
	output[j] = '1';
	findSequence(leftSide, rightSide+1, output, i+1, j-1);
	//put 1 0
	output[i] = '1';
	output[j] = '0';
	findSequence(leftSide+1, rightSide, output, i+1, j-1);
	//put 1 1
	output[i] = '1';
	output[j] = '1';
	findSequence(leftSide+1, rightSide+1, output, i+1, j-1);
}
int main()
{
	cout<<"Enter The Number: "<<endl;
	int n;
	cin>>n;
	char* arr = new char[2*n];
	findSequence(0, 0, arr, 0, 2*n-1);
}