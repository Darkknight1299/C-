#include<bits/stdc++.h>
using namespace std;

int Catalan_No(int n){
  if(n<=1){
    return 1;
  }
  int ans=0;
  for(int i=0;i<n;i++){
    ans+=Catalan_No(i)*Catalan_No(n-i-1);
  }
  return ans;
}

int main()
{   
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  int n;
  cin>>n;
  cout<<Catalan_No(n);
}