#include<bits/stdc++.h>
using namespace std;

int main () {
	
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif  
int A;
cin>>A;
int count=0;
    for(int i=5;A/i>=1;i*=5){
        count+=A/i;
    }
    cout<< count;
}

 

  
