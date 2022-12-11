#include<iostream>
using namespace std;
int expo(int n)
{
    //base case
    if(n == 0)
    {
        return 1;
    }
    int chotiProblem = expo(n/2);
    if(n & 1)
    {
        return chotiProblem * chotiProblem * 2;
    }
    else
    {
        return chotiProblem * chotiProblem;
    }
}
int main()
{
    int n = 11;
    cout<<"Answer is: "<<expo(n);
}