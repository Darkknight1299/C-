#include<bits/stdc++.h>
#include<stack>
using namespace std;

bool isValidExp(char* s){
  stack<char> s1;
  for(int i=0;s[i]!='/0';i++){
    char ch=s[i];
    if(ch=='('){
      s1.push(ch);
    }
    else if(ch==')'){
      if(s1.empty() or s1.top!='('){
        return false;
      }
      else{
        s1.pop();
      }
    }
  }
  return s1.empty();
}

int main()
{  
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  char s="((a+b)+(c-d+f))";
  if(isValidExp(s)){
    cout<<"Yes"<<endl;
  }
  else{
    cout<<"No"<<endl;
  }
}