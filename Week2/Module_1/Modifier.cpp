#include <bits/stdc++.h>
using namespace std;

int main()
{
  string a = "Hello";
  string b = "Sabbir";
//   Concat two string
  a+=b;
  cout<<a<<endl;
//   Concat two string
 b.append(a);
  cout<<b<<endl;
//   Add A Element After last index
   a.push_back('M');
//    Remove Last Element
a.pop_back(); 
cout<<a;



  return 0;
}