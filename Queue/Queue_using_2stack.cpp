#include<bits/stdc++.h>
#include<stack>
using namespace std;

template<typename T>

class Queue(){
  stack<T> s1,s2;
public:
  void push(T x){
    s1.push(x);
  }

  void pop(){
    if(!s1.empty()){
      while(s1.size()>1){
        T element=s1.top();
        s2.push(element);
        s1.pop();
      }
      s1.pop;
      swap(s1,s2);
    }
  }

  T front(){
    while(s1.size()>1){
        T element=s1.top();
        s2.push(element);
        s1.pop();
      }
      
      T element=s1.top();
      s1.pop;
      s2.push(element);

      swap(s1,s2);
      return element;
    }

  bool empty(){
    return s1.size()+s2.size()==0;
  }  
};

int main()
{  
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  Queue<int> q;
  q.push(1);
  q.push(2);
  q.push(3);

  while(!q.empty()){
    cout<<q.front()<<"->";
    q.pop();
  }

}


#include<iostream>
#include<stack>
using namespace std;

class Queue{
  stack<int> s1,s2;
public:
  void p(int x){
    while(!s1.empty()){
      int a=s1.top();
      s2.push(a);
      s1.pop();
    }

    s1.push(x);

    while(!s2.empty()){
      int a=s2.top();
      s1.push(a);
      s2.pop();
    }   
  }

  void o(){
    s1.pop();
  }

  int t(){
    return s1.top();
  }

  bool empty(){
    return s1.size()==0;
  }
};

int main() {
  Queue q;
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    q.p(i);
  }

  while(!q.empty()){
    cout<<q.t()<<" ";
    q.o();
  }
  return 0;
}