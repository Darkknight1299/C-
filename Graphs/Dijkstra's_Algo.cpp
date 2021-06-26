#include<bits/stdc++.h>
using namespace std;

template <typename T>
class Graph{
  unordered_map<T,list<pair<T,int>>> m;
public:
  
  void addEdge(T u,T v,int dist,bool bidir=true){
    m[u].push_back(make_pair(v,dist));
    if(bidir){
      m[v].push_back(make_pair(u,dist));
    }
  }

  void printAdj(){
    for(auto j:m){
      cout<<j.first<<"->";

      for(auto l:j.second){
        cout<<"("<<l.first<<","<<l.second<<")";
      }
      cout<<endl;
    }
  }

  void dijisktraSSSP(T src){
    unordered_map<T,int> dist;

    //Set all distance as Infinity
    for(auto j:m){
      dist[j.first]=INT_MAX;
    }

    //Make a set to find out node with minimum distance
    set<pair<int,T>> s;

    dist[src]=0;
    s.insert(make_pair(0,src));

    while(!s.empty()){
      //Find a pair at the front
      auto p= *(s.begin());
      T node=p.second;
      int nodeDist=p.first;
      s.erase(s.begin());

      //Iterate over distance of current node
      for(auto childPair:m[node]){
        if(nodeDist+childPair.second<dist[childPair.first]){
          //In set updating is not possible so we have to remove and then add again to simulate updation
          T dest=childPair.first;
          auto f=s.find(make_pair(dist[dest],dest));
          if(f!=s.end()){
            s.erase(f);
          }

          //Insert the new pair
          dist[dest]=nodeDist+childPair.second;
          s.insert(make_pair(dist[dest],dest));
        }
      }
    }
    //Lets Print distances to all other nodes for src
    for(auto d:dist){
      cout<<d.second<<" is located at "<<d.first<<endl;
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

  g.addEdge(1,2,1);
  g.addEdge(1,3,4);
  g.addEdge(2,3,1);
  g.addEdge(3,4,2);
  g.addEdge(1,4,7);

  g.printAdj();
  cout<<endl;
  g.dijisktraSSSP(1);
}