#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout << "Enter the Number for A: ";
    cin >> a;
    cout << "Enter the Number for B: ";
    cin >> b;
    cout << "Enter the Number for C: ";
    cin >> c;
    if (a + b > c)
    {
        cout << "Traingle" << endl;
    }
    else if(b+c>a){
        cout<<"Traingle"<<endl;
    }
    else if(c+a>b){
        cout<<"Traingle"<<endl;
    }
    else
    {
        cout << "Not Valid Triangle" << endl;
    }
    return 0;
}