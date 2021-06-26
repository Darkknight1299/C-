#include<bits/stdc++.h>
#include<vector>
using namespace std;

void reverseString(vector<char> &s){
  int n=s.size()-1;
  for(int i=0;i<(n/2);i++){
    swap(s[i],s[n-i]);
  }
  for(int i=0;i<=n;i++){
    cout<<s[i]<<" ";
  }
}

int main()
{   
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  vector<char> s;
  for(int i=0;i<5;i++){
    char c;
    cin>>c;
    s.push_back(c);
  }
  reverseString(s);
}