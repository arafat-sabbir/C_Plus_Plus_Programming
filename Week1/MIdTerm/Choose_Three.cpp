#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin>>k;
    for(int i = 0;i<k;i++){
        int n;
        cin>>n;
        int sum;
        cin>>sum;
        bool flag = false;
        int arr[n];
        for(int i =0;i<n;i++){
            cin>>arr[i];
        } 
        for(int i =0;i<n-2;i++){
            cout<<arr[i]+arr[i+1]+arr[i+2]<<endl;
            if(arr[i]+arr[i+1]+arr[i+2]==sum){
                flag = true;
            }else{
                flag = false;
            }
        } 
        // flag?cout<<"YES"<<endl:cout<<"NO"<<endl;
    
    }
  return 0;

}