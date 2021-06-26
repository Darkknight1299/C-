#include<bits/stdc++.h>
#include<stack>
using namespace std;

int main()
{  
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  stack<int> s;

  for(int i=0;i<=5;i++){
    s.push(i);
  }

  while(!s.empty()){
    cout<<s.top()<<" ";
    s.pop();
  }
}