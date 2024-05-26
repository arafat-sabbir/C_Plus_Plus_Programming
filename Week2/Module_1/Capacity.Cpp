#include <bits/stdc++.h>
using namespace std;

int main()
{
string s = "Hello World";
//   Get The Size Of A String
cout<<"Size:-"<<s.size()<<endl;
//   Get The Capacity Of A String
cout<<"Capacity:-"<<s.capacity()<<endl;
// Resize a String with parameter:Number Second Parameter Fill The Extra space with
s.resize(12,'x');
cout<<s;
//   Empty A String
s.clear();
// check a string is empty or not
s.empty();
  return 0;
}