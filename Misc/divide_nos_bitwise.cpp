#include<bits/stdc++.h>
using namespace std;

int divide(int a,int b){
  if(a==INT_MIN and b==-1){
    return INT_MAX;
  }
  int sign=(a>=0)^(b>=0)?-1:1;
  a=abs(a);
  b=abs(b);
  int ans=0;
  while(a-b>=0){
    int x=0;
    while(a-(b<<1<<x)>=0){
      x++;
    }
    ans+=1<<x;
    a-=b<<x;
  }
  return sign*ans;
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
  cout<<divide(a,b);
}