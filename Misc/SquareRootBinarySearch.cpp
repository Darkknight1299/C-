#include<iostream>
using namespace std;

float Square_Root_BS(int n,int p){
  int s=0;
  int e=n;
  int ans;
  while(s<=e){
    int mid=(s+e)/2;
    if(mid*mid==n){
      ans=mid;
      return ans;
    }
    else if(mid*mid>n){
      e=mid-1;
    }
    else{
      s=mid+1;
      ans=mid;
    }
  }

  float inc=0.1;
  for(int times=1;times<=p;times++){
    while(ans*ans<=n){
      ans=ans+inc;
    }
    ans=ans-inc;
    inc=inc/10;
  }

  return ans;
}

int main()
{  
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  int n,p;
  cin>>n>>p;
  cout<<Square_Root_BS(n,p); 
}