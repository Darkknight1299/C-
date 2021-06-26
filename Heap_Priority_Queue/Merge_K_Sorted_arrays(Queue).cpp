#include<bits/stdc++.h>
#include<queue>
using namespace std;

typedef pair<int,pair<int,int>> node;

vector<int> mergeKSortedArrays(vector<vector<int>> arr){
  vector<int> result;
  priority_queue<node,vector<int>,greater<node>> pq;//min priority queue;
  //insert 0th element of every array in the pq
  for(int i=0;i<arr.size();i++){
    pq.push({arr[i][0],{i,0}});
  }
  //remove the elements from your minHeap and add them to ur result vector
  while(!pq.empty()){
    node current=pq.top();
    pq.pop();
    int element=current.first;
    int x=current.second.first;//row in which element is present
    int y=current.second.second;//col in which element is present
    result.push_back(element);

    //push the next element in pq -> x,y+1
    if(y+1<arr.size()){
      pq.push({arr[x][y+1],{x,y+1}});
    }
  }
  return result;
}

int main()
{   
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  vector<vector<int>> arr{{2,6,12,15},
                          {1,3,14,20},
                          {3,5,8,10}};

  vector<int> output=mergeKSortedArrays(arr);
  for(auto x:output){
    cout<<x<<" ";
  }                        
}
