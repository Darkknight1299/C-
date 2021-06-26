#include<bits/stdc++.h>
#include<deque>
using namespace std;

int main()
{  
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  char a[]="abcefcghijkzyxz";
  int n=strlen(a);
  int curr_length=1;
  int max_len=1;

  int visited[256];

  for(int i=0;i<256;i++){
    visited[i]=-1;
  }

  visited[a[0]]=0;

  for(int i=1;i<n;i++){
    int last_occ=visited[a[i]];

    //Expansion
    if(last_occ==-1 or i-curr_length>last_occ){
      curr_length+=1;
      max_len=max(curr_length,max_len);
    }

    //Expansion and Contraction
    else{
      if(curr_length>max_len){
        max_len=curr_length;
      }
      curr_length=i-last_occ;
    }
    visited[a[i]]=i;
  }
  if(curr_length>max_len){
    max_len=curr_length;
  }

  cout<<max_len<<endl;
}