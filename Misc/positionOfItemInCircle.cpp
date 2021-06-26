#include<bits/stdc++.h>
using namespace std;

int solve(int A, int B, int C) {
    return (A+C-1)%B;
}    

int main () {
	
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif  
int A,B,C;
cout<<solve(A,B,C);
}

 

  
