#include <iostream>
using namespace std;
int main()
{
    int a = 5, b = 6;
    // OR operator if 00 then it 0 otherwise 1
    cout << "number " << (a | b) << endl;
    // AND operator if 11 then it 1 otherwise 0
    cout << "number " << (a & b) << endl;
    // XOR operator if both case is 11 or 00 then it 0
    cout << "number " << (a ^ b) << endl;
    // NOT operator is reverse the binary
    cout << "number " << (~a) << endl;
    // RS operator is divided by 2.
    cout << "number " << (a >> 2) << endl;
    // LS operator is multiply by 2.
    cout << "number " << (a << 2) << endl;
    return 0;
}