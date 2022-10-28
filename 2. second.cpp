#include <iostream>
using namespace std;
int main()
{
    float a, b, h;
    cout << "Enter the base and height of the triangle: ";
    cin >> b >> h;
    a = (b * h) / 2;
    cout << "The area of the triangle is: " << a << endl;
    return 0;
}
