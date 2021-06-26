#include<bits/stdc++.h>
#include<stack>
using namespace std;

void insertAtBottom(stack<int> &s,int x){
  //base case
  if(s.empty()){
    s.push(x);
    return;
  }
  //rec case
  int data=s.top();
  s.pop();
  insertAtBottom(s,x);
  s.push(data);
}

void recRev(stack<int> &s){
  //base case
  if(s.empty()){
    return;
  }

  //rec case
  //pop out the top element and insert at bottom of "reversed smaller stack"
  int x=s.top();
  s.pop();
  //rec reverse smaller stack
  recRev(s);
  insertAtBottom(s,x);
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

  recRev(s);

  while(!s.empty()){
    cout<<s.top()<<",";
    s.pop();
  }
}