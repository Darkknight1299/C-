#include<iostream>
using namespace std;

int main()
{  
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  int n,no;
  cin>>n;
  int cnt[64]={0}; 
  for(int i=0;i<n;i++){
   cin>>no;
   int j=0;
   while(no>0){
    int last_bit=(no & 1);
    cnt[j]+=last_bit;
    j++;
    no>>1;
   }
  }
  
  int p=1;
  int ans=0;
  for(int i=0;i<64;i++){
    cnt[i]%=3;
    ans+=(cnt[i]*p);
    p<<1;
  }

  cout<<ans<<endl;
}