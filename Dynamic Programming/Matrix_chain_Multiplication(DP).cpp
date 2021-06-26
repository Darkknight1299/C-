//InterviewBit Question
#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> A){
  int dp[200][200];
  memset(dp,0,sizeof dp);
  int n=A.size()-1;
  for(int i=0;i<n;i++){
    int r=0,c=i;
    while(c<n){
      for(int pivot=r;pivot<c;pivot++){
        val=min(val,dp[r][pivot]+dp[pivot+1][c]+A[r]*A[pivot+1]*A[c+1]);
      }
      dp[r][c]=val;
      r++,c++;
    }
  }
  return dp[0][n-1];
}

int main()
{   
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  
}