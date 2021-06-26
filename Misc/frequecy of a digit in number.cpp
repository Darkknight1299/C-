#include<bits/stdc++.h>

using namespace std;

int main()
{  
   int n,m,cnt=0;
   cin>>n>>m;
   while(n>0){
     if(n%10==m)
         cnt++;
     n=n/10;    
   }
   cout<<cnt;
}


