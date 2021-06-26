#include<bits/stdc++.h>
#include<queue>
using namespace std;

int join_ropes(int ropes[],int n){
  priority_queue<int,vector<int>,greater<int>> pq(ropes,ropes+n);//Initialised as minHeap
  int cost=0;
  while(pq.size()>1){
    int A=pq.top();
    pq.pop();
    int B=pq.top();
    pq.pop();

    int new_rope=(A+B);
    cost+=new_rope;
    pq.push(new_rope);
  }
  return cost;  
}

int main()
{   
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  int ropes[]={4,3,2,6};
  int n=4;
  cout<<join_ropes(ropes,n)<<endl;
}