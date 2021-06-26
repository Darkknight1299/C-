#include<bits/stdc++.h>
#include<stack>
using namespace std;

int max_area(int a[],int n){
  stack<int> s;
  int area=0;
  int mxArea=0;
  s.push(0);
  for(int i=1;i<n;i++){
    if(a[s.top()]<=a[i]){
      s.push(i);
    }
    else{
      int x=s.top();
      s.pop();
      if(!s.empty()){
        area=x*(i-s.top()-1);
      }
      else{
        area=x*(i);
      }
    }
    mxArea=max(mxArea,area);
  }
  return mxArea;
}

int main()
{  
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  int a[]={6,2,5,4,4,1,6};
  int n=sizeof(a)/sizeof(int);
  cout<<max_area(a,n)<<endl;
}