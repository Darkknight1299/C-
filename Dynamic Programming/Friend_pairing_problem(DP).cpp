#include<bits/stdc++.h>
using namespace std;

int dp[100][100];

int friendPairing(int n){
  if(n==0){
    return 0;
  }
  if(dp[n]!=0){
    return dp[n];
  }
  return dp[n]=dp[n-1]+dp[n-2]*(n-1);
}

int main()
{   
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  memset(dp,0,sizeof dp);

  return 0;
}