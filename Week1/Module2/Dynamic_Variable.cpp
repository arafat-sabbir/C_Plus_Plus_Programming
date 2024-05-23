#include <bits/stdc++.h>
using namespace std;

int *fun()
{
    int *a = new int;
    *a = 100;
    int **p = &a;
    return *p;
}
int main()
{
    int *a = new int;
    *a = 10;
    cout << a << endl;
    float *f = new float;
    *f = 50;
    cout << f << endl;
    int *abc = fun();
    cout << *abc;
    return 0;
}