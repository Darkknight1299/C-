#include<bits/stdc++.h>
#include<map>
#include<cstring>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
  vector<vector<string>> y;
  if(strs.size() == 0) return y;
  map<string,vector<string>> dict;
  for(string s: strs)
  {
    string sorted = s;
    sort(sorted.begin(),sorted.end());
    dict[sorted].push_back(s);
  }
  map<string,vector<string>>::iterator o = dict.begin();
  while(o != dict.end())
  {
    y.push_back(o->second);
    o++;
  }
  return y;
}

int main()
{   
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  vector<string> s;
  for(int i=0;i<10;i++){
    string a;
    cin>>a;
    s.push_back(a);
  }
  vector<vector<string>> r=groupAnagrams(s);
  for(auto it:r){
    for(auto p:it){
      cout<<(*p)<<" ";
    }
    cout<<endl;
  }
}