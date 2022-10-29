#include <iostream>
using namespace std;
int main()
{
    int a = 11, b = 7, c;
    c = a & b;
    cout << c << endl; // 3

    int d = 11, e = 7, f;
    f = d | e;
    cout << f << endl; // 15

    int g = 11, h = 7, i;
    i = g ^ h;
    cout << i << endl; // 12

    char j = 5, k;
    k = j << 1;
    cout << (int)k << endl; // 10

    char l = 20, m;
    m = l >> 1;
    cout << (int)m << endl; // 10

    char x = 5, y;
    y = ~x;
    cout << (int)y << endl; // -6
    return 0;
}