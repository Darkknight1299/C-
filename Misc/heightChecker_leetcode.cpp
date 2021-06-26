#include<bits/stdc++.h>
#include<vector>
using namespace std;

int heightChecker(vector<int> &height){
  for(int i=0;i<height.size();i++){
    for(int j=i;j<height.size();j++){
      if(height[i]>height[j]){
        swap(height[i],height[j]);
      }
    }
  }
}

int main()
{   
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  vector<int> height;
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    int no;
    cin>>no;
    height.push_back(no);
  }
  vector<int> height2=height;
  heightChecker(height);
  int count=0;
  for(int i=0;i<height.size();i++){
    if(height[i]!=height2[i]){
      count++;
    }
  }
  cout<<count;
}