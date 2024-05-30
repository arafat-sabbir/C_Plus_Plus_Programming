#include <bits/stdc++.h>
using namespace std;
class Person{
    public:
    string name;
    int age;
    Person(string name,int age){
        this->name = name;
        this->age = age;
    }
};
int main()
{
  Person* sayed = new Person("Abu Saiyed",18);
  Person* sabbir = new Person("Arafat Sabbir",19);

  *sabbir = *sayed;
  delete sayed;
  cout<<sabbir->name<<" "<<sabbir->age;
  return 0;
}