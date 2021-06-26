#include<bits/stdc++.h>
using namespace std;

int fib(int n,  int dp[]){
	//base case
	if(n==0 || n==1){
		return n;
	}

	//recursive case
	if(dp[n]!=0){
		return dp[n];
	}
	int ans;
	ans=fib(n-1,dp)+fib(n-2,dp);
	dp[n]=ans;
	return ans;
}

int main () {
	
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin>>n;
    int dp[n+2]={0};
    int c=fib(n,dp);
    int ans=0;
    for(int i=0;i<=n;i++){
    	ans+=dp[i]*dp[i];
    }
    cout<<ans+1;
}
