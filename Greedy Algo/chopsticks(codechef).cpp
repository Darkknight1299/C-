//CodeChef Problem
#include<bits/stdc++.h>
using namespace std;

int main()
{  
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  int n,d;
  cin>>n>>d;
  int chopsticks[n];
  for(int i=0;i<n;i++){
    cin>>chopsticks[i];
  }
  sort(chopsticks,chopsticks+n);
  int i=0;
  int pairs=0;
  while(i<n){
    if(chopsticks[i+1]-chopsticks[i]<=d){
      pairs++;
      i+=2;
    }
    else{
      i++;
    }
  }
  cout<<pairs<<endl;
}