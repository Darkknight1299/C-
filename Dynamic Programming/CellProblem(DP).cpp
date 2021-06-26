//Hacker Blocks Problem
#include<bits/stdc++.h>
using namespace std;

long long int solveCellProblem(int n,int x,int y,int z){
  //Bottom up dp
  long long int* dp=new long long int[n+1];
  dp[0]=0;
  dp[1]=0;

  for(int i=2;i<=n;i++){
    if(i%2==0){
      dp[i]=min(dp[i/2]+x,dp[i-1]+y);
    }
    else{
      dp[i]=min(dp[i-1]+y,dp[(i+1)/2]+x+z);
    }
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

  int n,x,y,z;
  cin>>n>>x>>y>>z;
  cout<<solveCellProblem(n,x,y,z);
}