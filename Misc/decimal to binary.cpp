#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

vector<int> deci2bin(int n){
    int temp=n;
    vector <int>v;
    while(temp){
        int digit=temp%2;
        v.push_back(digit);
        temp=temp/2;
    }
    reverse(v.begin(), v.end());
    return v;
}

int main () {
	
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif  
   
    int n;
    cin>>n;
    vector<int> b;
    b=deci2bin(n);
    for(auto x:b){
        cout<<x;
    }
}

 

  
