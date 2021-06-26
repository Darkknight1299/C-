#include<bits/stdc++.h>
using namespace std;

class Graph{
  unordered_map<string,list<pair<string,int>>> l;
public:
  void addEdge(string x,string y,bool bidir,int wt){
    l[x].push_back(make_pair(y,wt));
    if(bidir){
      l[y].push_back(make_pair(x,wt));
    }
  }

  void printAdjList(){
    for(auto p:l){
      string city=p.first;
      list<pair<string,int>> nbrs=p.second;

      cout<<city<<"->";
      for(auto nbr:nbrs){
        int dist=nbr.second;
        string dest=nbr.first;

        cout<<dest<<" "<<dist<<",";
      }
      cout<<endl;
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

  Graph g;
  g.addEdge("A","B",true,20);
  g.addEdge("B","D",true,40);
  g.addEdge("A","C",true,10);
  g.addEdge("C","D",true,40);
  g.addEdge("A","D",false ,50);

  g.printAdjList();
}