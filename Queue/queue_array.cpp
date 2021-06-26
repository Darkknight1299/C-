#include<bits/stdc++.h>
using namespace std;

class Queue{
  int *arr;
  int f,r,cs,ms;
public:
  Queue(int ds = 5){
    arr=new int[ds];
    cs=0;
    f=0;
    ms=ds;
    r=ms-1;
  }

  bool full(){
    return cs==ms;
  }

  bool empty(){
    return cs==0;
  }

  void push(int d){
    if(!full()){
      r=(r+1)%ms;
      arr[r]=d;
      cs++;
    }
  }

  void pop(){
    if(!empty()){
      f=(f+1)%ms;
      cs--;
    }
  }

  int front(){
    return arr[f];
  }

  ~Queue(){
    if(arr!=NULL){
      delete [] arr;
      arr=NULL;
    }
  }
};

int main()
{  
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  Queue q; //or Queue q[100]->gives ds as 100

  for(int i=1;i<=5;i++){
    q.push(i);
  } 

  q.pop();
  q.pop();

  q.push(7);

  while(!empty()){
    cout<<q.front()<<" ";
    q.pop();
  }

}