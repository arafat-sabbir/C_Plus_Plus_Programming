#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int b = a % 2;
    switch (b)
    {
    case 0:
        cout << "Even";
        break;
    case 1:
        cout << "Odd";
    }

    return 0;
}