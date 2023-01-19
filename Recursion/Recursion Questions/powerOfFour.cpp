#include<bits/stdc++.h>
using namespace std;
bool powerFour(int n)
{
    if(n == 0)
        return 0;
    while(n != 1)
    {
        if(n % 4 != 0)
            return 0;
        n = n / 4;
    }
    return 1;
}
int main()
{
    int n = 2;
    if(powerFour(n))
    {
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}