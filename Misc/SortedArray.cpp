#include<bits/stdc++.h>
using namespace std;

bool Issort(int a[],int n){
  if(n==0 || n==1){
    return true;
  }
  if(a[0]<a[1] and Issort(a+1,n-1)){
    return true;
  }
  return false;
}

int main()
{  
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  int a[]={1,2,3,4,5};
  int n=sizeof(a)/sizeof(int);
  cout<<Issort(a,n);
}