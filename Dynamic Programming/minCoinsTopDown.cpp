#include<bits/stdc++.h>
using namespace std; 

int min_coins(int n,int dp[],int coin[],int t){
    //base case
    if(n==0){
        return n;
    }
    if(dp[n]!=0){
        return dp[n];
    }
    //recursive case
    int ans=INT_MAX;
    for(int i=0;i<t;i++){
        if(coin[i]<=n){
        int sub=min_coins(n-coin[i],dp,coin,t);    
        ans=min(ans,sub+1);
        }
    }
    dp[n]=ans;
    return dp[n];
}

int main () {
	
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif

    int n,t;
    int dp[10000]={0};
    cin>>t;
    int coin[t];
    for(int i=0;i<t;i++){
        cin>>coin[i];
    }
    cin>>n;
    cout<<min_coins(n,dp,coin,t);
}
  
   