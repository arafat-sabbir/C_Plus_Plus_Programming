#include <bits/stdc++.h>
using namespace std;

int main()
{
  string names;
  getline(cin,names);
  stringstream ss(names);
  string word;
  int flag = 0;
  while(ss>>word)
{
  if(word == "Jessica")
  {
    flag=1;
    break;
  }
}
if(flag==1){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}
  return 0;
}