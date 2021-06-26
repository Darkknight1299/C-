#include<iostream>
using namespace std;

#define ll long long

ll primes[]={2,3,5,7,11,13,17,19};
  
int Docal(ll n){
  int j=0;
  int ans=0;
  int deno=0;
  while(n>0){
    ll last_bit=n&1;
    if(last_bit==1){
      deno*=primes[j];
    }
    j++;
    n=n>>1;
  }
  return deno;
}

void Count(ll n){
  int ans=0;
  for(int i=0;i<n;i++){
  int deno= Docal(i);
  if(i&1==1){
    ans+=n/deno;
  }
  else{
    ans-=n/deno;
  }
  }
  cout<<ans;
}

int main()
{  
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  ll t;
  cin>>t;
  while(t){
    ll n;
    cin>>n;
    Count(n);
    t--;
  }
}