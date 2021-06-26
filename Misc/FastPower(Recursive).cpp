#include<bits/stdc++.h>
using namespace std;

int power(int a,int n){
  if(n==0){
    return 1;
  }
  else{
    return a*power(a,n-1);
  }
}

int fastPower(int a,int n){
  if(n==0){
    return 1;
  }
  int small_ans=fastPower(a,n/2);
  small_ans*=small_ans;
  else if(n%2==0){
    return small_ans;
  }
  else{
    return a*small_ans;  
  }
}

int main()
{  
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  int a,n;
  cin>>a>>n;
  cout<<fastPower(a,n);
}