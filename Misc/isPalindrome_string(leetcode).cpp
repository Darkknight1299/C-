#include<bits/stdc++.h>
#include<cstring>
using namespace std;

bool isPalindrome(string s){
  int i=0;
  int j=s.length()-1;
  while(i<j){
    if(!isalnum(s[i])){
      i++;
    }
    if(!isalnum(s[j])){
      j--;
    }
    if(tolower(s[i++])!=tolower(s[j--])){
      return false;
    }
  }
  return true;
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
  if(isPalindrome(s)){
    cout<<"true";
  }
  else{
    cout<<"false";
  }
}