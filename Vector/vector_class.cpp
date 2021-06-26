#include<bits/stdc++.h>
#include "vector.h"
using namespace std;

int main()
{  
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  Vector<int> v;
  v.push_back(1);
  v.push_back(2);
  v.push_back(3);
  v.push_back(4);
  v.push_back(5);

  v.pop_back();

  v.push_back(6);

  cout<<"Capacity :"<<v.capacity();

  for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";  
  }

}