#include<bits/stdc++.h>
#include<climits>//used for INT_MAX
using namespace std;

//min steps from n to 1
//n->n/3,n/2,n-1
int minSteps(int n,int dp[]){
	//Base case
	if(n==1){
		return 0;
	}
	//check of earlier computation
	if(dp[n]!=0){
		return dp[n];
	}
	//rec case
	int op1,op2,op3;
	op1=op2=op3=INT_MAX;//int max means infinity
	if(n%3==0){
		op1=minSteps(n/3,dp);
	}
	if(n%2==0){
		op2=minSteps(n/2,dp);
	}
	op3=minSteps(n-1,dp);
	int ans= min(min(op1,op2),op3)+1;
	return dp[n]=ans;	

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
int dp[100]={0};
cout<<minSteps(n,dp);
}