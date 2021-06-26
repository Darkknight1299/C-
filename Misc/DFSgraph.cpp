#include<bits/stdc++.h>
#include<map>
using namespace std;

template <typename T>
class Graph{
   map<T,list<T>> l;

public:
 void AddEdge(int x,int y){
  l[x].push_back(y);
  l[y].push_back(x);
 }

 void dfs_helper(T src,map<T,bool>visited){
 	//Recursivefunction that will travel the graph

 	cout<<src<<" ";
 	//go to all neighbours of the node that is not visited
 	visited[src]=true;
 	for(T nbr:l[src]){
 		if(!visited[nbr]){
 			dfs_helper(nbr,visited);
 		}
 	}
 }

 void BFS(T src){
    map<T, bool> visited;
    //mark all the nodes all not visited in the starting
    for(auto p:l){
      T node=p.first;
      visited[node]=false;
    }
    //call the helper func
    dfs_helper(src,visited);

 }   
};

int main () {
	
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif  
    
    Graph<int> g;
    g.AddEdge(0,1);
    g.AddEdge(1,2);
    g.AddEdge(2,3);
    g.AddEdge(3,4);
    g.AddEdge(4,5);
    g.BFS(0);
}
  
   