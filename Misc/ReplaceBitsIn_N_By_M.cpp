#include<iostream>
#include<algorithm>
using namespace std;

int ClearBit(int n,int i,int j){
  int a=(~0<<j);
  int b=(1<<i)-1;
  int mask= a | b;
  int ans=n & mask;
  return ans;
}

int ReplaceBits(int n,int m,int i,int j){
  int n_=ClearBit(n,i,j);
  int ans= n_ | (m<<i);
  return ans; 
}

int main()
{  
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  int n,m,i,j;
  cin>>n>>m>>i>>j;
  cout<<ReplaceBits(n,m,i,j)<<endl;
}