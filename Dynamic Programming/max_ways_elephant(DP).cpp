#include<bits/stdc++.h>
using namespace std;

int dp[100][100];

int max_ways_elephant(int* arr,int R,int C){ //elephant moves like it does in chess-o(N^3)
  for(int i=0;i<R;i++){
    for(int j=0;j<C;j++){
      //base case
      if(i==0 and j==0){
        dp[i][j]=1;
      }
      else if(i==0){
        for(int k=0;k<j;k++){
          dp[i][j]+=dp[i][k];
        }
      }
      else if(j==0){
        for(int k=0;k<i;k++){
          dp[i][j]+=dp[k][j];
        }
      }
      else{
        for(int k=0;k<i;k++){
          for(int d=0;d<j;d++){
            dp[i][j]+=dp[k][j]+dp[i][d];
          }
        }
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