#include<bits/stdc++.h>
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

  ll t;
  cin>>t;
  while(t){
    ll n;
    cin>>n;
    memset(pre,0,sizeof(pre));
    pre[0]=1;

    //Read the input
    ll sum=0;
    for(ll i=0;i<n;i++){
      cin>>a[i];
      sum+=a[i];
      sum=(sum+n)%n;
      pre[sum]++;
    }

    ll ans=0;
    for(ll i=0;i<n;i++){
      ll m=pre[i];
      ans+=(m*(m-1))/2;
    }
    cout<<ans<<endl;
    t--;
  }
}
