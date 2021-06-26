#include<bits/stdc++.h>
using namespace std;

int main () {
	
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif  
    
   int t;
   cin>>t;
   while(t--){
    long long int a,b,c;
    cin>>a>>b>>c;
    long long int ans=0;
    int count=0;
    if(a>b){
        a=a+b;
        ans=a;
        count++;
    }
    else{
        b=b+a;
        ans=b;
        count++;
      }
    while(ans<=c){
      if(b>a){
        a=a+b;
        ans=a;
        count++;
      }
      else{
        b=b+a;
        ans=b;
        count++;
      }
    }  
    cout<<count<<endl;  
    }
}

  
   