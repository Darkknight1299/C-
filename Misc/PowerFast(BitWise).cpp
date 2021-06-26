//Leetcode ques--  powx-n

#include<iostream>
using namespace std;

int PowerFast(int n,int m){
  int ans=1;
  while(m>0){
    int last_bit=(m&1);
    if(last_bit>0){
      ans*=n;
    }
    n=n*n;
    m>>1;
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

  int n,m;
  cin>>n>>m;
  cout<<PowerFast(n,m);
}