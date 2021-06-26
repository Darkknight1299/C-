#include<bits/stdc++.h>
#include<list>
using namespace std;

class Queue{
  int cs;
  list<int> l;
public:
  Queue(){
    cs=0;
  }

  bool isEmpty(){
    return cs==0;
  }

  void push(int d){
    l.push_back(d);
    cs++;
  }

  void pop(){
    if(!isEmpty()){
      cs--;
      l.pop_front();
    }
  }

  int front(){
    return l.front();
  }
};

int main()
{  
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  Queue q;

  for(int i=1;i<=5;i++){
    q.push(i);
  }

  while(!q.isEmpty()){
    cout<<q.front()<<" ";
    q.pop();
  }
}