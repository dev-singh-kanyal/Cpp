#include <iostream>
using namespace std;
int main()
{
    int a, b;
    float c;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    if (b == 0)
    {
        cout << "Invalid denominator" << endl;
    }
    else
    {
        c = (float)a / b;
        cout << c << endl;
    }
    return 0;
}