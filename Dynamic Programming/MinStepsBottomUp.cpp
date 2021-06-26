#include<bits/stdc++.h>
#include<climits>//for int_max
using namespace std;

//min steps from n to 1
//n->n/3,n/2,n-1
int minSteps(int n){
	int dp[100]={0};
	dp[1]=0;
	for(int i=2;i<=n;i++){
		int op1,op2,op3;
		 op1=op2=op3=INT_MAX;//int_max=infinity
		if(i%3==0){
			op1=minSteps(i/3);
		}
		if(i%2==0){
			op2=minSteps(i/2);
		}
		op3=minSteps(i-1);
		dp[i]=min(min(op1,op2),op3)+1;
	}
	return dp[n];
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
cout<<minSteps(n);
}