#include <bits/stdc++.h>
using namespace std;
class Person
    {
        public:
        int a;
        int b;
        Person(int a,int b){
            this->a=a;
            this->b=b;
        }
    };
int main()
{
  Person sabbir(10,20);
  cout<<sabbir.a<<sabbir.b;
  return 0;
}