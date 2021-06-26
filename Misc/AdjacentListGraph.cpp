#include<bits/stdc++.h>
using namespace std;

class Graph{
    int V;
    //Array of lists(containg key and nodes)
    list<int> *l;
  public:
    Graph(int V){
      this->V=V;
      l = new list<int>[V];
    }

    void AddEdge(int x,int y){
        l[x].push_back(y);
        l[y].push_back(x); 
    }

    void PrintAdjList(){
      //Itterate Overall Vertices
      for(int i=0;i<V;i++){
        cout<<"Vertex "<<i<<"->";
        for(int nbr:l[i]){
          cout<<nbr<<",";
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

    Graph g(4);
    g.AddEdge(0,1);
    g.AddEdge(0,2);
    g.AddEdge(2,3);
    g.AddEdge(1,2);
    g.PrintAdjList();
    
}
  
   