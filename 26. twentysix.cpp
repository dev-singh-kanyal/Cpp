#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "Enter a no. ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
        // sum += i;
    }
    cout << "Sum of First " << n << " natural numbers is " << sum;
    return 0;
}