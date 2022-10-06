#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the Number: ";
    cin >> n;
    if (n <= 0)
    {
        return false;
    }
    //int ans = (n & (n - 1));

//FIRST approch

    // if (ans == 0)
    // {
    //     cout << "RESULT: " << ans;
    //     return true;
    // }
    // else
    // {
    //     cout << "Not RESULT: " << ans;
    //     return false;
    // }

    //second apporach
    //return (ans==0);

//Third apporach
return ((n & (n-1))==0);

}