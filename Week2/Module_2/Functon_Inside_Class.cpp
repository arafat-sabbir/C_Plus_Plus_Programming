#include <bits/stdc++.h>
using namespace std;
class Person
{
    public:
        string name;
        int age;
        int mark1;
        int mark2;
    Person(string nm,int ag,int mr,int mr2){
        name=nm;
        age = ag;
        mark1 = mr;
        mark2 = mr2;
    }
    void name2()
    {
        cout<<name<<" "<<age<<endl;
    }
    int totalMark(){
        return mark1+mark2;
    }

};
int main()
{
  Person sabbir("Arafat Sabbir",19,20,30);
  sabbir.name2();
  cout<<sabbir.totalMark();
  return 0;
}