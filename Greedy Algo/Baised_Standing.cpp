//SPOJ Problem
#include<bits/stdc++.h>
using namespace std;

int main()
{   
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  int t,n,r;
  string s;
  int arr[100000]={0};
  cin>>t;
  while(t){
    cin>>n;
    int rank=1;
    int diff=0;
    memset(arr,0,sizeof arr);
    for(int i=0;i<n;i++){
      cin>>s>>r;
      arr[r]++;
    }
    for(int i=0;i<=n;i++){
      while(arr[i]>0){
        diff+=abs(rank-i);
        rank++;
        arr[i]--;
      }  
    }
    cout<<diff<<endl;
    t--;
  }
}