#include <iostream>
using namespace std;

int main()
{
    char a = 128;
    cout << (int)a << endl; // -128

    char b = 127;
    b++;
    cout << (int)b << endl; // -128 

    char d = -128;
    d--;
    cout << (int)d << endl; // 127

    return 0;
}