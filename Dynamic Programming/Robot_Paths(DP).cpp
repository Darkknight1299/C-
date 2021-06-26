//CodeChef Problem
#include<bits/stdc++.h>
using namespace std;

#define MOD 10000007

int dp[1001][1001];

int numWays(int Ro,int Col){
  //base case
  if(dp[0][0]=-1){
    return 0;
  }

  //No of ways  for first row
  for(int j=0;j<Col;j++){
    if(dp[0][j]==-1){
      break;
    }
    dp[0][j]=1;
  }

  //No of ways for first col
  for(int j=0;j<Ro;j++){
    if(dp[j][0]==-1){
      break;
    }
    dp[j][0]=1;
  }

  //Bottom up approach
  for(int i=1;i<Ro;i++){
    for(int j=1;j<Col;j++){
      //if cell is blocked then leave it
      if(dp[i][j]==-1){
        continue;
      }
      dp[i][j]=0;
      if(dp[i][j-1]!=-1){
        dp[i][j]=dp[i][j-1]%MOD;
      }
      if(dp[i-1][j]!=-1){
        dp[i][j]=(dp[i][j]+dp[i-1][j])%MOD;
      }
    }
  }
  //check for final cell
  if(dp[Ro-1][Col-1]==-1){
    return 0;
  }
  return dp[Ro-1][Col-1];
}

int main()
{   
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  memset(dp,0,sizeof dp);

  int M,N,P; //M-no. of rows,N-No. of columns
  cin>>M>>N>>P;

  for(int i=0;i<P;i++){
    int X,Y;
    cin>>X>>Y;
    //Mark all blocked cells as -1
    dp[X][Y]=-1;
  }

  cout<<numWays(M,N)<<endl;

  return 0;
}