#include<bits/stdc++.h>
#include<queue>
using namespace std;

int main()
{  
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  queue<char> q;
  int freq[27] ={0};

  //running stream of input until '.'
  char ch;
  cin>>ch;

  while(ch!='.'){
    q.push(ch);
    freq[ch-'a']++;//using ASCII values to map char to index

    //query
    while(!q.empty()){
      int idx=q.front()-'a';
      if(freq[idx]>1){
        q.pop();
      }
      else{
        cout<<q.front()<<endl;
        break;
      }
    }
    //when q is empty
    if(q.empty()){
      cout<<"-1"<<endl;
    }

    cin>>ch;
  }
}