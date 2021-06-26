#include<bits/stdc++.h>
using namespace std;

bool compare(pair<int,int> p1,pair<int,int> p2){
  int d1=p1.first*p1.first+p1.second*p1.second;
  int d2=p2.first*p2.first+p2.second*p2.second;

  if(d1==d2){
    return p1.first<p2.first;
  }

  return d1<d2;
}

int main()
{  
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  int n;
  cin>>n;
  vector<pair<int,int>> v;

  for(int i=0;i<n;i++){
    int x,y;
    cin>>x>>y;
    v.push_back(make_pair(x,y));
  }

  sort(v.begin(),v.end(),compare);

  for(auto x:v){
    cout<<"Car : "<<x.first<<" "<<x.second<<endl;
  }
}