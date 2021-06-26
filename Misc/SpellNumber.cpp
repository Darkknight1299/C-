#include<bits/stdc++.h>
using namespace std;

string word[]={"zero","one","two","three","four","five","six","seven","eight","nine"};

void PrintSpell(int n){
  if(n==0){
    return;
  }
  
  PrintSpell(n/10);
  cout<<word[n%10]<<" ";
}

int main()
{  
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  int n;
  cin>>n;
  PrintSpell(n);
}