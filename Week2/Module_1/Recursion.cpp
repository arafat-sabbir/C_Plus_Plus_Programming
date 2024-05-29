#include <bits/stdc++.h>
using namespace std;
int fun(int n){
    if(n==1){
        return 1;
    }
    return n*fun(n-1);
}
int main()
{
int k;
cin>>k;
  int ab =fun(k);
  cout<<ab;
  return 0;
}