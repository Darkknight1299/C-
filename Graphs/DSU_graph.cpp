//Pairing-Hacker Blocks
#include<bits/stdc++.h>
using namespace std;

struct dsu{
  vector<int> par,sz;
  int total_comp;
  //initialize
  void init(int n){
    par.resize(n);
    for(int i=0;i<n;i++){
      par[i]=i;
      sz[i]=1;
    }
    total_comp=n;
  }

  int get_superparent(int x){
    if(x==par[x]){
      return x;
    }
    else{
      return par[x]=get_superparent(par[x]);
    }
  }

  void unite(int x,int y){
    int super_parent_x=get_superparent(x);
    int super_parent_y=get_superparent(y);
    if(super_parent_x!=super_parent_y){
      par[super_parent_x]=super_parent_y;
      sz[super_parent_y]+=sz[super_parent_x];
      sz[super_parent_x]=0;
      total_comp--;
    }
  }
} G;

int main()
{   
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  int n,m,ans=0;
  cin>>n>>m;
  G.init(n);
  for(int i=0;i<m;i++){
    int x,y;
    cin>>x>>y;
    G.unite(x,y);
  }
  //all elements are in their connected components
  for(int i=0;i<n;i++){
    //i is considered as x
    int super_parent_i=G.get_superparent(i);
    ans+=(n-G.sz[super_parent_i]);
  }
  cout<<ans/2;  
}