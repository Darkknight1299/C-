#include<bits/stdc++.h>
#include<stack>
using namespace std;

void transfer(stack<int> &s1,stack<int> &s2,int n){
  for(int i=0;i<n;i++){
    s2.push(s1.top());
    s1.pop();
  }
}

void reverseStack(stack<int> &s){
  stack<int> s2;

  for(int i=0;i<s.size();i++){
    int x=s.top();
    s.pop();

    //transfer n-i-1 elements from s to s2;
    transfer(s,s2,s.size()-i-1);
    //insert the element x in s
    s.push(x);
    //transfer n-i-1 elements from s2 to s;
    transfer(s2,s,s.size()-i-1);
  }
}

int main()
{  
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  stack<int> s;
  s.push(1);
  s.push(2);
  s.push(3);
  s.push(4);
  s.push(5);

  while(!s.empty()){
    cout<<s.top()<<",";
    s.pop();
  }

  cout<<endl;

  reverseStack(s);

  while(!s.empty()){
    cout<<s.top()<<",";
    s.pop();
  }

  cout<<endl;   
}