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
  for(int i=1;i<=n;i++){
    if(i%2==0){
      cout<<"1";
      for(int j=1;j<=i-2;j++){
        cout<<"0";
      }
      cout<<"1"<<endl;
    }
    else{
      for(int j=1;j<=i;j++){
        cout<<"1";
      }
      cout<<endl;
    }
  }
}

