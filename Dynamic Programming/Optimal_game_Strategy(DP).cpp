#include<bits/stdc++.h>
using namespace std;

int dp[100][100];

int Optimal_Strategy(int* a,int i,int j){ //i->start  j->end
  if(i>j){
    return 0;
  }
  if(dp[i][j]!=0){
    return dp[i][j];
  }
  int op1=a[i]+min(Optimal_Strategy(a,i+2,j),Optimal_Strategy(a,i+1,j-1));//min is used as opponent will try to makeit min
  int op2=a[j]+min(Optimal_Strategy(a,i,j-2),Optimal_Strategy(a,i+1,j-1));
  return dp[i][j]=max(op1,op2);
}

int main()
{   
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  memset(dp,0,sizeof dp);

  
}