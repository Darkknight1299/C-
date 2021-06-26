#include<bits/stdc++.h>
#include<stack>
using namespace std;

void stockSpan(int prices[],int n,int span[]){
  stack<int> s;//indexes of days
  s.push(0);
  span[0]=1;

  //loop for rest of the days-O(N)
  for(int i=1;i<n;i++){
    int currPrice=prices[i];
    //topmost element that is igher than current price
    while(!s.empty() and prices[s.top()]<=currPrice){
      s.pop();
    }
    
    if(s.empty()){
      span[i]=i+1;
    }
    else{
      int prev_highest=s.top();
      span[i]=i-prev_highest;
    }
    //push this elemnt into stack
    s.push(i);
  }
}

int main()
{  
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  int prices[]={100,80,60,70,60,75,85};
  int n= sizeof(prices)/sizeof(int);
  int span[100000]={0};
  
  stockSpan(prices,n,span);

  for(int i=0;i<n;i++){
    cout<<span[i]<<endl;
  }
}