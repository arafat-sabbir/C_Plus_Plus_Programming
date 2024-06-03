#include <bits/stdc++.h>
using namespace std;
class Student {
    public:
    string name;
    int cls;
    char section;
    int studentId;
};
int main()
{
  int n;
  cin>>n;
  Student *arr = new Student[n];
  for(int i =0;i<n;i++){
    cin.ignore();
    cin>>arr[i].name>>arr[i].cls>>arr[i].section>>arr[i].studentId;
  }
  int before =0;
  int after = n;
  while (before < after)
  {
    swap(arr[before].section,arr[after].section);
    before++;
    after--;
  }
  for(int i = 0;i<n;i++){
    cout<<arr[i].name<<" "<<arr[i].cls<<" "<<arr[i].section<<" "<<arr[i].studentId<<endl;
  }
  return 0;
}