#include<bits/stdc++.h>
using namespace std;

string convertToTitle(int A) {
    string ans;
    while(A){
        int element=(A-1)%26;
        ans.push_back(char(65+element));
        A=(A-1)/26;
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

int main () {
	
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif  
int A;
cin>>A;
cout<<convertToTitle(A);
}

 

  
