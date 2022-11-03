#include <iostream>
using namespace std;

int main()
{
    int n, fact = 1;
    cout << "Enter a no. ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
        // fact *= i;
    }
    cout << "fact of " << n << " is " << fact;
    return 0;
}