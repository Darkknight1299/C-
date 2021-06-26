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

  priority_queue<int> pq; //max heap, for minHeap- priority_queue<int,vector<int>,greater<int>> pq
  for(int i=1;i<n;i++){
    int no;
    cin>>no;
    pq.push(no);
  }
  while(!pq.empty()){
    cout<<pq.top()<<" ";
    pq.pop();
  }
}