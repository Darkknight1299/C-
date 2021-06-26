#include<bits/stdc++.h>
using namespace std;

int isDivisible(string s){
  int oddcount=0;
  int evencount=0;
  int count=1;
  for(int i=s.length()-1;i>=0;i--){
    if(count%2==1){
      if(s[i]=='1'){
        oddcount++;
      }
    }
    else{
      if(s[i]=='1'){
        evencount++;
      }
    }
    count++;
  }
  if((oddcount-evencount)%3==0){
    return 1;
  }
  else{
    return 0;
  }
}


int main()
{   
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  string s;
  cin>>s;
  cout<<isDivisible(s);
}