#include<bits/stdc++.h>
#include<queue>
using namespace std;

int main()
{  
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  queue<int> q;
  for(int i=0;i<=5;i++){
    q.push(i);
  }

  while(!q.empty()){
    cout<<q.front()<<"<-";
    q.pop();
  }
}