#include <iostream>
using namespace std;
int main()
{
    int i = 5, j;
    j = i++;
    cout << j << " " << i << endl; // 5 6
    int k = 5, l;
    l = ++k;
    cout << l << " " << k << endl; // 6 6
    int a = 5, b, m, n;
    m = 2 * a++;
    n = 2 * ++a;
    b = m + n;
    cout << m << " " << n << " " << b << " " << a << endl; // 24 7
    ;
    int c = 5, d;
    d = 2 * c++ + 2 * c++;
    cout << d << " " << c << endl; // 22 7
    return 0;
}