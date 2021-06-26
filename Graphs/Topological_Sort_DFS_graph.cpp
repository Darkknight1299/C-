#include<bits/stdc++.h>
#include<climits>
using namespace std;

template <typename T>
class Graph{
  map<T,list<T>> l;
public:
  void addEdge(T x,T y){
    l[x].push_back(y);
  }

  void dfs_helper(T src,map<T,bool> &visited,list<T> &ordering){
    //rec func to traverse graph
    cout<<src<<" ";
    visited[src]=true;
    //go to all neighbors of that node that is not visited
    for(auto nbr:l[src]){
      if(!visited[nbr]){
        dfs_helper(nbr,visited,ordering);
      }
    }
    ordering.push_front(src);
    return;
  }

  void dfs(T src){
     map<T,bool> visited;
     list<T> ordering; 
     for(auto node_pair:l){
      T node=node_pair.first;
      visited[node]=false;
     }
     dfs_helper(src,visited,ordering);

     for(auto node:ordering){
      cout<<node<<endl;
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

  Graph<string> g;
  g.addEdge("Python","Data Processing");
  g.addEdge("Python","Pytorch");
  g.addEdge("Python","ML");
  g.addEdge("Data Processing","ML");
  g.addEdge("Pytorch","DL");
  g.addEdge("ML","DL");
  g.addEdge("DL","Face Recogn");
  g.addEdge("Dataset","Face Recogn");

  g.dfs(0);
}