#include <iostream>
using namespace std;
int main()
{
    int billAmount;
    float discount;
    cout << "Enter the bill amount: ";
    cin >> billAmount;
    cout << "Billing Amount is: " << billAmount << endl;
    if (billAmount < 100)
    {
        discount = 0;
        cout << "Discount is " << discount << endl;
        cout << "Discounted Amount is " << billAmount << endl;
    }
    else if (billAmount >= 100 && billAmount < 500)
    {
        discount = billAmount * 0.1;
        cout << "Discount is " << discount << endl;
        cout << "Discounted Amount is " << billAmount - discount << endl;
    }
    else
    {
        discount = billAmount * 0.2;
        cout << "Discount is " << discount << endl;
        cout << "Discounted Amount is " << billAmount - discount << endl;
    }
}