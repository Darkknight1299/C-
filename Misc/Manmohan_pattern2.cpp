#include<bits/stdc++.h>
using namespace std;

int main()
{  
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  int n;
  cin>>n;
  cout<<"1"<<endl;
  for(int i=1;i<n;i++){
      cout<<i;
      for(int j=0;j<=i-2;j++){
        cout<<"0";
      }
      cout<<i<<endl;
  }
}