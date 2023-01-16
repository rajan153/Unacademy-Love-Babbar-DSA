#include<iostream>
using namespace std;
void printPowerSet(string str, int index, string output)
{
	if(index == str.length())
	{
		cout<<output<<endl;
		return;
	}
	char ch = str[index];
//	Exclude
	printPowerSet(str, index + 1, output);
//	Include
	output.push_back(ch);
	printPowerSet(str, index + 1, output);
	
}
int main()
{
	string str = "abc";
	int index = 0;
	string output = "";
	printPowerSet(str, index, output);
}