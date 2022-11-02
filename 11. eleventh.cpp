#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout << "Enter the two numbers x and y: ";
    cin >> x >> y;
    if (x > y)
    {
        cout << "Max is " << x << endl;
    }
    else
    {
        cout << "Max is " << y << endl;
    }
}