#include<bits/stdc++.h>
using namespace std;

int main () {
	
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif  
   
    int w;
    cin>>w;
    if(w==2 || w==1){
      cout<<"NO";
    }
    if(w>2){
    if(w%2==0){
      cout<<"YES";
    }
    else{
      cout<<"NO";
    }
  }   
 } 

  
   