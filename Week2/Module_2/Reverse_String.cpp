#include <bits/stdc++.h>
using namespace std;
void print(stringstream &ss){
    string word;
    if(ss>>word){
        print(ss);
        cout<<word <<" ";
    }
}
int main()
{
  string k;
  getline(cin,k);
  stringstream ss(k);
  print(ss);
  return 0;
}