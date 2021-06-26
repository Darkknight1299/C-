#include<bits/stdc++.h>
using namespace std;

int lis(int arr[100],int n){
  int dp[101]={1};

  int best=-1;
  for(int i=1;i<n;i++){
    for(int j=0;j<i;j++){
      if(arr[j]<=arr[i]){
        int curr_length=1+dp[j];
        dp[i]=max(curr_length,dp[i]);
      }
    }
    best=max(best,dp[i]);
  }
  return best;
}

int main()
{   
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  int arr[100];
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int ans=lis(arr,n);
  cout<<ans<<endl;
}