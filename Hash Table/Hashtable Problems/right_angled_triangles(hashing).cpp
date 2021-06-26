#include<bits/stdc++.h>
using namespace std;

class Point{
public:
  int x,y;
  Point(int x,int y){
    this->x=x;
    this->y=y;
  }
};

int count_right_triangle(vector<Point> coords){
  int n=coords.size();
  unordered_map<int,int> m1,m2;
  for(int i=0;i<n;i++){
    m1[coords[i].x]++;
    m2[coords[i].y]++;
  }
  int ans=0;
  for(int i=0;i<coords.size();i++){
    ans+=(m1[coords[i].x]-1)*(m2[coords[i].y]-1);
  }
  return ans;
}

int main()
{   
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  int m;
  cin>>m;
  vector<Point> coords;
  while(m--){
    int x,y;
    cin>>x>>y;
    Point p(x,y);
    coords.push_back(p);
  }
  cout<<count_right_triangle(coords);
}