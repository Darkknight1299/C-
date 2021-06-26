#include<bits/stdc++.h>
#include<cstring>
using namespace std;

#define ll long

ll a[1000005],pre[1000005]; 

int main () {
	
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif

   int t;
   cin>>t;
   while(t--){
      int n;
      cin>>n;
      memset(pre,0,sizeof(pre));
      pre[0]=1;//o elements sum will be zero
      //take input
      int sum=0;
      for(int i=0;i<n;i++){
          cin>>a[i];
          sum+=a[i];
          sum=(sum+n)%n;
          pre[sum]++;
      }
      ll ans=0;
      for(int i=0;i<n;i++){
        int m=pre[i];
        ans+=(m)*(m-1)/2;
      }
      cout<<ans<<endl;
   }
}
  
   