#include<bits/stdc++.h>
using namespace std;

int fib(int n){
  if(n==1 || n==0){
    return n;
  }
  else{
    return fib(n-1)+fib(n-2);
  }
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
  cout<<fib(n);
}