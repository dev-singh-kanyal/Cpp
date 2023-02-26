#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    char job[20];
    cout << "May i know your name: ";
    getline(cin, name);
    cout << "Your job title: ";
    cin.get(job, 20);
    cout << "Welcome " << job << " " << name << endl;
    return 0;
}
