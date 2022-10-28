#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float a, b, c, d, p, q;
    cout << "Enter a b c ";
    cin >> a >> b >> c;
    d = (b * b) - 4 * a * c;
    p = (-b + sqrt(d)) / (2 * a);
    q = (-b - sqrt(d)) / (2 * a);
    cout << "the roots are " << p << " and " << q << endl;
    return 0;
}