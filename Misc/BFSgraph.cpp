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

 void BFS(T src){
  map<T,int>  visited;
  queue<T> q;
  q.push(src);
  visited[src]=true;
  while(!q.empty()){
    T node=q.front();
    q.pop();
    cout<<node<<" ";
    for(int nbr:l[node]){
      if(!visited[nbr]){
        q.push(nbr);
        //mark nbr visited
        visited[nbr]=true;
      }
    }
  }
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
  
   