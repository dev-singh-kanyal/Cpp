#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    cout << "May i know your name: ";
    getline(cin, name);
    cout << "Welcome Mr " << name << endl;
    return 0;
}