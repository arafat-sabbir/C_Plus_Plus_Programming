#include <bits/stdc++.h>
using namespace std;
namespace Sabbir{
 int age = 19;
 string name = "arafat Sabbir";
 void hello(){
  cout<<"Hello From Sabbir Namspaces";
 }
};
namespace Rakib{
  string name ="Rakib Ahmed";
  int age = 20;
  void hello(){
    cout<<"Hello Rakib Namespaces";
  }
};
using namespace Sabbir;
int main()
{
  cout<<name<<" "<<age<<endl;
Rakib::hello();
  return 0;
}