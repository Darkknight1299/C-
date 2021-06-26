#include<bits/stdc++.h>
using namespace std;

int fibBU(int n){
	/*
	int dp[101]={0};
	dp[1]=1;
	for(int i=2;i<=n;i++){
		dp[i]=dp[i-1]+dp[i-2];
	}
	return dp[n];
	*/
	if(n==0 || n==1){
		return n;
	}
	int a=0;
	int b=1;
	int c;
	for(int i=2;i<=n;i++){
		c=a+b;
		a=b;
		b=c;
	}
	return c;
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
cout<<fibBU(n);
}