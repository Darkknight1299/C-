#include<bits/stdc++.h>
#include<set>
using namespace std;

int main()
{   
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  /*int arr[]={10,20,11,9,8,11,10};
  int n=sizeof(arr)/sizeof(int);

  set<int> s;
  for(int i=0;i<n;i++){
    s.insert(arr[i]);
  } 
  for(set<int>::iterator it=s.begin();it!=s.end();it++){
    cout<<*(it)<<" ";
  }
  cout<<endl;
  s.erase(10);
  auto x=s.find(11);
  s.erase(x);
  for(set<int>::iterator it=s.begin();it!=s.end();it++){
    cout<<*(it)<<" ";
  }*/

  set<pair<int,int>> s;
  s.insert(make_pair(10,1));
  s.insert(make_pair(10,5));
  s.insert(make_pair(20,100));
  s.insert(make_pair(20,50));
  s.insert(make_pair(20,1));
  s.insert(make_pair(5,1));
  s.insert(make_pair(5,3));
  s.insert(make_pair(5,4));

  s.erase(s.find(make_pair(5,3)));

  auto it=s.lower_bound(make_pair(20,1));
  cout<<it->first<<","<<it->second<<endl;

  auto it1=s.upper_bound(make_pair(20,1));
  cout<<it1->first<<","<<it1  ->second<<endl;

  for(auto p:s){
    cout<<p.first<<" and "<<p.second<<endl; //comparison done on basis of first and then second
  }
}