#include<bits/stdc++.h>
#include<unordered_map>
#include<list>
#include<cstring>
using namespace std;

class Graph{
    //Array of lists(containg key and nodes)
    unordered_map<string, list<pair<string,int>>> l;
  public:
    void AddEdge(int x,int y, bool bidir, int wt){
        l[x].push_back(make_pair(y,wt));
        if(bidir){
        l[y].push_back(make_pair(x,wt)); 
      }  
    }

    void PrintAdjList(){
      //Itterate Overall Vertices
      for(auto p:l){
        string city=p.first;
        list<pair<string,int>>nbrs=p.second;
        cout<<city<<"_>";
        for(auto nbr:nbrs){
          string dest=nbr.first;
          int dist=nbr.second;
          cout<<dest<<" "<<dist<<",";
        }
        cout<<endl;
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

    Graph g();
    g.AddEdge("A","B",true,20);
    g.AddEdge("B","D",true,30);
    g.AddEdge("C","D",true,40);
    g.AddEdge("C","A",true,10);
    g.AddEdge("A","D",false,50);
    g.PrintAdjList();
    
}
  
   