#include<bits/stdc++.h>
#include<climits>
using namespace std; 

int min_coins(int n,int coin[],int t){
    int dp[10000]={0};
    //base case
    dp[0]=0;
    //itterate over all states from 1......n
    for(int N=0;N<=n;N++){
        //intialise curr ans as int-max
        dp[N]= INT_MAX;
        for(int i=0;i<t;i++){
            if(n-coin[i]>=0){
            int sub=dp[n-coin[i]];
            dp[N]=min(dp[N],sub)+1;
            }
        }
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

    int n,t;
    cin>>t;
    int coin[t];
    for(int i=0;i<t;i++){
        cin>>coin[i];
    }
    cin>>n;
    cout<<min_coins(n,coin,t);
}
  
   