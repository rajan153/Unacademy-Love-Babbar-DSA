#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    switch(n)
    {
        case 0: cout<<"Case 0 is here: "<<endl;
        break;
        case 1: cout<<"Case 1 is here: "<<endl;
        break;
        default: cout<<"No number: "<<endl;
        break;
    }
    return 0;
}