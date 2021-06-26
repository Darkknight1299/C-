#include<bits/stdc++.h>
using namespace std;

int Multiply(int a,int b){
  if(b==1){
    return a;
  }

  return a+Multiply(a,b-1);  
}

int main()
{  
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  int a,b;
  cin>>a>>b;
  cout<<Multiply(a,b);
}