#include<bits/stdc++.h>
using namespace std;

int count_set_bits(int n){
	
	int ans=0;
	while(n>0){
		n=n&(n-1);
		ans++;
	}
	return ans;
}

int main()
{
	int t;
	cin>>t;
	int b[t];
	for(int i=0;i<t;i++){
		cin>>b[i];
	}
	for(int i=0;i<t;i++){
		
		cout<<count_set_bits(b[i])<<endl;
		
	}
}
