#include<iostream>
using namespace std;

bool canPlaceCows(int stalls[],int n,int c,int min_step){
  int last_cow=stalls[0];
  int cnt=1;

  for(int i=1;i<n;i++){
    if(stalls[i]-last_cow>=mid_step){
      last_cow=stalls[i];
      cnt++;
      if(cnt==c){
        return true;
      }
    }
  }
  return false;
}

int minStalldistance(int stalls[],int n,int c){
  int ans,s=0;
  int e=stalls[n-1]-stalls[0];
  while(s<=e){
    int mid=(s+e)/2;
    bool cowRakhPaye=canPlaceCows(stalls,n,c,mid);
    if(cowRakhPaye){
      ans=mid;
      s=mid+1;
    }
    else{
      e=mid-1;
    }
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

  int t;
  cin>>t;
  while(t){
    int n,c;
    cin>>n>>c;
    int stalls[n];
    for(int i=0;i<n;i++){
      cin>>stalls[i];
    }
    cout<<minStalldistance(stalls,n,c);
    t--;
  }
}