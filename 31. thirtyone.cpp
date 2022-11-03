#include <iostream>
using namespace std;

int main()
{
   int n, r;
   cout << "Enter the number: ";
   cin >> n;
   while (n >= 1)
   {
      r = n % 10;
      n = n / 10;
      cout << r << endl;
   }
   return 0;
}
