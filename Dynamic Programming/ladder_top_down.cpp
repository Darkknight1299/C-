#include<bits/stdc++.h>
using namespace std;

int ladder_top_down(int n,int k,int dp[]){
  //base case
  if(n==0){
    return 1;
  }

  //Look up
  if(dp[n]!=0){
    return dp[n];
  }
  //rec case
  int ways=0;
  for(int i=1;i<k;i++){
    if(n-i>0){//0 is ground level
      ways+=ladder_top_down(n-i,k,dp);
    }
  }
  return dp[n]=ways;
}

int ladder_bottom_up(int n,int k){
  int dp[100]={0};
  dp[0]=1;//start case
  for(int i=0;i<=n;i++){
    dp[i]=0;
    for(int j=1;j<=k;j++){
      if(i-j>=0){
        dp[i]+=dp[i-j];
      }
    }
  }
  return dp[n];
}

int ladder_optimised(int n,int k){
  int dp[100]={0};
  dp[0]=dp[1]=1;

  for(int i=2;i<=k;i++){
    dp[i]=2*dp[n-1];
  }
  for(int i=k+1;i<=n;i++){
    dp[i]=2*dp[i-1]-dp[i-k-1];
  }

  return dp[n];
}

int main()
{   
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  int n,k;
  int dp[100]={0};
  cin>>n>>k;
  cout<<ladder_top_down(n,k,dp)<<" Ways"<<endl;
}