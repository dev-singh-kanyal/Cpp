#include <iostream>
using namespace std;

int main()
{
    int i = 0;
    for (;;)
    {
        cout << "i " << i <<endl;
        i++;
        if (i > 9)
        {
            break;
        }
    }
}