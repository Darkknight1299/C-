#include<bits/stdc++.h>
using namespace std;

//No of ways to place 4x1 tiles on a 4xN wall

int Tiling(int n){
  if(n==1 || n==4){
    return 1;
  }
  else{
    return Tiling(n-1)+Tiling(n-4);
  }
}

int main()
{  
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  int n;
  cin>>n;
  cout<<Tiling(n);
}