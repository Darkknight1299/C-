#include<bits/stdc++.h>
#include<climits>
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
  }

  void topological_sort(){
    int *indegree = new int[V];
    for(int i=0;i<V;i++){
      indegree[i]=0;
    }
    //Update indegree
    for(int i=0;i<V;i++){
      for(auto y:l[i]){
        indegree[y]++;
      }
    }

    //bfs
    queue<int> q;
    //1.step find node with 0 indegree
    for(int i=0;i<V;i++){
      if(indegree[i]==0){
        q.push(i);
      }
    }

    //start removing elements from the queue
    while(!q.empty()){
      int node=q.front();
      cout<<node<<" ";
      q.pop();

      //iterate over nbrs of that node and reduce their indegree by one
      for(auto nbr:l[node]){
        indegree[nbr]--;
        if(indegree[nbr]==0){
          q.push(nbr);
        }
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

  Graph g(6);
  g.addEdge(0,2);
  g.addEdge(1,2);
  g.addEdge(1,4);
  g.addEdge(2,3);
  g.addEdge(2,5);
  g.addEdge(3,5);
  g.addEdge(4,5);

  g.topological_sort();
}