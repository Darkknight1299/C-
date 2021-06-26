#include<bits/stdc++.h>
using namespace std;

int main()
{  
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  int n;
  cin>>n;
  int p,e,inc=0;
  cin>>p;
  n--;
  while(n>0){
    cin>>e;
    if(e==p){
      cout<<"false";
      return 0;
    }
    else if(e<p and inc==0){
      p=e;
    }
    else if(e<p and inc==1){
      cout<<"false";
      return 0;
    }
    else if(e>p and inc==1){
      p=e;
    }
    n--;
  }
  cout<<"true";
  return 0;
}