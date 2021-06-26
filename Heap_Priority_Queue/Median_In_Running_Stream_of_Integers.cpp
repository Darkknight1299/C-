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

  priority_queue<int> leftHeap; //maxHeap
  priority_queue<int,vector<int>,greater<int>> rightHeap;  //minHeap

  int d;
  cin>>d;
  leftHeap.push(d);

  float med=d;
  cout<<"Median-"<<med<<endl;
  while(d!=-1){
    if(leftHeap.size()>rightHeap.size()){
      if(d<med){
        rightHeap.push(leftHeap.top());
        leftHeap.pop();
        leftHeap.push(d);
      }
      else{
        rightHeap.push(d);
      }
      med=(leftHeap.top()+rightHeap.top())/2.0;
    }
    else if(leftHeap.size()==rightHeap.size()){
      if(d<med){
        leftHeap.push(d);
        med=leftHeap.top();
      }
      else{
        rightHeap.push(d);
        med=rightHeap.top();
      }
    }
    else{
      if(d>med){
        leftHeap.push(rightHeap.top());
        rightHeap.pop();
        rightHeap.push(d);
      }
      else{
        leftHeap.push(d);
      }
      med=(leftHeap.top()+rightHeap.top())/2.0;
    }
    cout<<"Median-"<<med<<endl;
    cin>>d;
  }
}
