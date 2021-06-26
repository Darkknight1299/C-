#include<bits/stdc++.h>
#include<climits>
using namespace std;

template <typename T>
class Graph{
  map<T,list<T>> l;
public:
  void addEdge(int x,int y){
    l[x].push_back(y);
    l[y].push_back(x);
  }

  void dfs_helper(T src,map<T,bool> &visited){
    //rec func to traverse graph
    cout<<src<<" ";
    visited[src]=true;
    //go to all neighbors of that node that is not visited
    for(auto nbr:l[src]){
      if(!visited[nbr]){
        dfs_helper(nbr,visited);
      }
    }
  }

  void dfs(T src){
     map<T,bool> visited;
     for(auto node_pair:l){
      T node=node_pair.first;
      visited[node]=false;
     }
     dfs_helper(src,visited);
  }
};

int main()
{  
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  Graph<int> g;
  g.addEdge(0,1);
  g.addEdge(1,2);
  g.addEdge(2,3);
  g.addEdge(3,4);
  g.addEdge(4,5);
  g.addEdge(3,0);

  g.dfs(0);
}