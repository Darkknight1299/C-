#include<bits/stdc++.h>
using namespace std;

int n,b;
int arr[100005];

int main()
{  
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  int t;
  cin>>t;
  int tc=0;
  while(t--){
    tc++;
    cin>>n>>b;
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    sort(arr,arr+n);
    int ans=0;
    for(int i=0;i<n;i++){
      if(arr[i]<=b){
        ans++;
        b-=arr[i];
      }
    }
    cout<<"Case #"<<tc<<" : "<<ans<<endl;
  } 
}