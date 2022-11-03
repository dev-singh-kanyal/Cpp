#include <iostream>
using namespace std;
int main()
{
    int n, r, sum = 0, m;
    cout << "Enter a no. ";
    cin >> n;
    m = n;
    while (n != 0)
    {
        r = n % 10;
        n = n / 10;
        sum = sum + r * r * r;
    }
    if (sum == m)
    {
        cout << "It is Amstrong number" << endl;
    }
    else
    {
        cout << "It is not a Amstrong number" << endl;
    }
}