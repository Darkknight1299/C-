#include<bits/stdc++.h>
using namespace std;

int titleToNumber(string s) {
int result = 0;
for (int i = 0; i < s.size(); i++) {
               result = result * 26 + (s[i] - 'A' + 1);
}
return result;
}

int main () {
	
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif  
string A;
cin>>A;
cout<<titleToNumber(A);
}

 

  
