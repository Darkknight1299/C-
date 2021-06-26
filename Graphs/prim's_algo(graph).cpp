#include<bits/stdc++.h>
using namespace std;

class Graph{
  //Adjacency List
  vector<pair<int,int>> *l;
  int V;

public:
  Graph(int n){
    V=n;
    l=new vector<pair<int,int>>[n];
  }

  addEdge(int x,int y,int w){
    l[x].push_back({y,w});
    l[y].push_back({x,w});
  }

  int prim_mst(){
    //Init a minHeap
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> Q;

    //visited array that denotes whetera node has been included in MST or not
    bool* vis=new bool[V]{0};
    int ans;

    //begin
    Q.push({0,0});//weight and node
    while(!Q.empty()){
      //pick out the edge with min weight
      auto best=Q.top();
      Q.pop();

      int to=best.second;
      int weight=best.first;

      if(vis[to]){
        //discard the edge and continue
        continue; 
      }

      //otherwise take the current adge
      ans+=weight;
      vis[to]=1;

      //add the new edges
      for(auto x:l[to]){
        if(vis[x.first]==0){
          Q.push({x.second,x.first});
        }
      }
    }
    return ans;
  }
};

int main()
{   
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  int n,m;
  cin>>n>>m;

  Graph g(n);
  for(int i=0;i<m;i++){
    int x,y,w;
    cin>>x>>y>>w;
    g.addEdge(x-1,y-1,w);//0 based indexing
  }

  cout<<g.prim_mst()<<endl;    
}