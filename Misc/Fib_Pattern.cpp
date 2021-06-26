#include<bits/stdc++.h>
using namespace std;

int main()
{  
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  int n,a=0,b=1;
  cin>>n;
  int nst=1;
  int rows=1;
  while(rows<=n){ 
    int cst=1;
    while(cst<=nst){
      cout<<a<<"  ";
      int c=a+b;
      a=b;
      b=c;
      cst++;
    }
    rows++;
    nst++;
    cout<<endl;
  }
}