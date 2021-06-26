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

  void dfs(){
     map<T,bool> visited;
     for(auto node_pair:l){
      T node=node_pair.first;
      visited[node]=false;
     }

     //iterate over all vertices and init a dfs call for all unvisited vertices
     int cnt=0;
     for(auto p:l){
      T node=p.first;
      if(!visited[node]){
         cout<<"Component "<<cnt<<"-->";
         dfs_helper(node,visited);
         cnt++;
         cout<<endl;
      }
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

  Graph<int> g;
  g.addEdge(0,1);
  g.addEdge(1,2);
  g.addEdge(2,3);
  g.addEdge(0,4);
  g.addEdge(0,3);
  
  g.addEdge(5,6);
  g.addEdge(6,7);

  g.addEdge(8,8);

  g.dfs();
}