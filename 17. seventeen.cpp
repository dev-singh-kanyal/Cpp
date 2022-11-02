#include <iostream>
using namespace std;
int main()
{
    int a = 10, b = 5, i = 5;
    if (a > b && ++i <= b)
    {
    }
    cout << i << endl; // i = 6
    
    if (a < b || ++i <= b)
    {
    }
    cout << i << endl; // i = 7
    return 0;
}