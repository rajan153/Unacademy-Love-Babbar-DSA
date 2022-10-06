#include<iostream>
using namespace std;
int main()
{
    int n=-9023;
    while(n!=0)
    {
        int digits =n%10;
        cout<<"Digits "<<digits<<endl;
        n=n/10;
    }
    return 0;
}