#include<iostream>
using namespace std;

int findzeroes(int n)
{
	int ans=0;
	int p=5;
	while(n/p>0){
		ans+=n/p;
		p=p*5;
	}
	return ans;
}

int main()
{
	long long int n;
	cin>>n;
	cout<<findzeroes(n)<<endl;
	return 0;	
}

