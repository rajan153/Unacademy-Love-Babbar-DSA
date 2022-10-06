//hollow traingle
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the Number: " << endl;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        //left hand spaces
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
            //sides traingle lines
        for (int j = 1; j <= i * 2 - 1;j++)
        {
            if (j == 1 ||  j == i * 2 - 1)
            {
                cout << "*";
            }
            //traingle below line
            else if (i == n)
            {
                cout << "*";
            }
            //Triangle inner space
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}