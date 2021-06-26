#include<bits/stdc++.h>
#include<list>
using namespace std;

int main()
{  
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  list<pair<int,int>> *l;//dynamic allocation
  int n;//no of vertices
  cin>>n;
  l=new list<pair<int,int>> [n];

  int e;//no of edges
  cin>>e;
  for(int i=0;i<e;i++){
    int x,y,wt;
    cin>>x>>y>>wt;
    l[x].push_back(make_pair(y,wt));
    l[y].push_back(make_pair(x,wt));//if it is bidirectional edge
  }

  //Print the LL
  for(int i=0;i<n;i++){
    //print every LL
    cout<<"Linked List "<<i<<"->";
    for(auto xp:l[i]){
      cout<<"("<<xp.first<<","<<xp.second<<"),";
    }
    cout<<endl;
  }
}