#include<iostream>
#include<algorithm>
using namespace std;

int main()
{  
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  int n,m;
  cin>>n;
  int ans=0;
  for(int i=0;i<n;i++){
   cin>>m;
   ans=ans^m;
  }
  cout<<ans<<endl;
}