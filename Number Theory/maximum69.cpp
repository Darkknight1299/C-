#include<bits/stdc++.h>
using namespace std;

int maximum69Number (int num) {
  string s_num = to_string(num);
  for (auto &c : s_num) {
    if (c == '6') {
      c = '9';
      break;
    }
  }
  return stoi(s_num);
}

int main()
{   
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  int a;
  cin>>a;
  cout<<maximum69Number(a);
}