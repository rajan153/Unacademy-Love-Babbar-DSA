#include<iostream>
using namespace std;
void findCombination(string str, int index, string output)
{
	if(index == str.length())
	{
		cout<<output<<endl;
		return;
	}
	char ch = str[index];
	//Add Character without Space
	output.push_back(ch);
	findCombination(str, index+1 ,output);
	//Add space between the character
	if(str[index+1] == '\0')
	{
		return;
	}
	output.push_back(' ');
	findCombination(str, index+1, output);
}
int main()
{
	string str = "123";
	int index = 0;
	string output = "";
	findCombination(str, index, output);
}