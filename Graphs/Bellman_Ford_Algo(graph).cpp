#include<bits/stdc++.h>
using namespace std;

vector<int> bellman_ford(int V,int src,vector<vector<int>> edges){
  //create a vector
  vector<int> dist(V+1,INT_MAX);
  dist[src]=0;

  //relax all edges V-1 times
  for(int i=0;i<V-1;i++){
    for(auto edge:edges){
      int u=edge[0];
      int v=edge[1];
      int wt=edge[2];

      if(dist[u]!=INT_MAX and dist[u]+wt<dist[v]){
        dist[v]=dist[u]+wt;
      }
    }
  }
  //negitive weight cycle
  for(auto edge:edges){
    int u=edge[0];
    int v=edge[1];
    int wt=edge[2];

    if(dist[u]!=INT_MAX and dist[u]+wt<dist[v]){
        cout<<"negitive Wt Cycle Found";
        exit(0);
      }
  }
  return dist;  
} 

int main()
{   
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout); 
  #endif
  //  code starts

  int n,m;
  //edge list
  vector<vector<int>> edges;

  for(int i=0;i<m;i++){
    int u,v,wt;
    cin>>u>>v>>wt;
    edges.push_back({u,v,wt});
  }

  //bellman Algo
  vector<int> distances=bellman_ford(n,1,edges);

  for(int i=0;i<n;i++){
    cout<<"Node "<<i<<" is at distance "<<distances[i]<<endl;
  }
}