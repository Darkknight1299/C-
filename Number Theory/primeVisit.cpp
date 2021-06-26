#include<bits/stdc++.h>
using namespace std;

void prime_sieve(int p[]){
	// Marking all odd numbers as prime
	for(long i=3;i<=1000000;i=+2){
		p[i]=1;
	}
	//Making multiples of odd number not prime
	for(long i=3;i<=1000000;i=+2){
		if(p[i]==1){
			for(long j=i*i;j<=1000000;j++){
				p[j]=0;
			}
		}
	}
	p[2]=1;
	p[0]=p[1]=0;
}

int main () {
	
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif

	int a[1000000]={0};
	prime_sieve(a);
	int csum[1000005]={0};
	for(int i=1;i<=1000000;i++){
		csum[i]=csum[i-1]+a[i];
	}
	int t;
	cin>>t;
	while(t--){
	int n,m;
	cin>>n>>m;
	cout<<csum[m]-csum[n-1]; 
}
}
