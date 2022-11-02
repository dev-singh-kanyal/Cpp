#include <iostream>
using namespace std;
int main()
{
    int sum, n;
    cout << "Enter the nth value: ";
    cin >> n;
    sum = (n * (n + 1)) / 2;
    cout << "The sum of first n natural numbers is " << sum << endl;
    return 0;
}