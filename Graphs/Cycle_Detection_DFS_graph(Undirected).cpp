#include<bits/stdc++.h>
using namespace std;

class Graph{
  list<int> *l;
  int V;
public:
  Graph(int V){
    this->V=V;
    l=new list<int>[V];
  }

  void addEdge(int x,int y){
    l[x].push_back(y);
    l[y].push_back(x);
  }

  bool cycle_hepler(int node,bool *visited,int parent){
      visited[node]=true;

      for(auto nbr:l[node]){
        if(!visited[nbr]){
          bool cycle_mila=cycle_hepler(nbr,visited,node);
          if(cycle_mila){
            return true;
          }
        }
        else if(nbr!=parent){
          return true;
        }
      }
      return false;
  }

  bool contains_cycle(){
    bool *visited= new bool[V];
    for(int i=0;i<V;i++){
      visited[i]=false;
    }

    cycle_hepler(0,visited,-1);
  }  
};

int main()
{  
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  Graph g(5);

  g.addEdge(0,1);
  g.addEdge(1,2);
  g.addEdge(2,3);
  g.addEdge(3,4);
  //g.addEdge(4,0);
  
  if(g.contains_cycle()){
    cout<<"Cycle is There";
  }
  else{
    cout<<"No Cycle";
  }
}