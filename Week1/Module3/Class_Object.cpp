#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:
    char name[100];
    int roll;
    double cgpa;
};

int main()
{
    Student a;
     Student b;
    cin.getline(a.name,100);
    cin>>a.roll;
    cin>>a.cgpa;
    cout<<a.name<<" "<<a.roll<<" "<<a.cgpa <<endl;
    getchar();
    cin.getline(b.name,100);
    cin>>b.roll;
    cin>>b.cgpa;
    cout<<b.name<<" "<<b.roll<<" "<<b.cgpa;
  return 0;
}