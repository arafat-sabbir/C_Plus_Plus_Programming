#include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int age;
    int marks;
};
int main()
{
  int n;
  cin>>n;

  Student *arr = new Student[n];
  Student mn;
  mn.marks = __INT_MAX__;
  for(int i =0;i<n;i++){
    cin>>arr[i].name>>arr[i].age>>arr[i].marks;
  }
  for(int i = 0;i<n;i++){
    if(arr[i].marks<mn.marks){
        mn = arr[i];
    }
  }
  cout<<mn.name<<" "<<mn.age<<" "<<mn.marks<<endl;
  return 0;
}