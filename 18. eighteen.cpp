#include <iostream>
using namespace std;
int main()
{
    int a = 10, b = 5;
    if (true)
    {
        int c = a + b;
        cout << c << endl; // 15
    }
    {
        int d = a - b;
        if (true)
        {
            cout << d << endl; // 5
        }
    }
    if (int e = a * b)
    {
        cout << e << endl; // 50
    }
    return 0;
}