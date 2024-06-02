#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:
    string name;
    int cls;
    char section;
    int id;
    int math_marks;
    int english_marks;
};
bool cmp(Student a,Student b){
    if(a.english_marks!=b.english_marks){
        return a.english_marks>b.english_marks;
    }
    if(a.math_marks!=b.math_marks){
        return a.math_marks>b.math_marks;
    }
    return a.id<b.id; 
};
int main()
{
    int n;
    cin>>n;
  Student *arr = new Student[n];
  for(int i =0;i<n;i++){
    cin.ignore();
    cin>>arr[i].name>>arr[i].cls>>arr[i].section>>arr[i].id>>arr[i].math_marks>>arr[i].english_marks;
  }
  sort(arr,arr+n,cmp);
      for(int i =0;i<n;i++){
    cout<<arr[i].name<<" "<<arr[i].cls<<" "<<arr[i].section<<" "<<arr[i].id<<" "<<arr[i].math_marks<<" "<<arr[i].english_marks<<endl;
  }
  delete[] arr;
  return 0;
}
