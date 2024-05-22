#include <iostream>
using namespace std;
int main()
{
    int x = 5;
    switch (x)
    {
    case 1:
        cout << "On1" << endl;
    case 2:
        cout << "Two" << endl;
    case 3:
        cout << "Three" << endl;
        break;
    case 4:
        cout << "Four" << endl;
    case 5:
        cout << "Five" << endl;
        break;
    default:
        cout << "Not Found";
    }
    return 0;
}