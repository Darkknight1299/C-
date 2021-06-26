#include<bits/stdc++.h>
using namespace std;

int dp[100][100];

int max_ways_rat(int* arr,int R,int C){// rat-> 1 step at a time  o(N^2)
  for(int i=0;i<R;i++){
    for(int j=0;j<C;j++){
      if(i==0 or j==0){
        dp[i][j]=1;
      }
      else{
        dp[i][j]=dp[i-1][j]+dp[i][j-1];
      }
    }
  }
  return dp[R-1][C-1];
}

int main()
{   
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

}