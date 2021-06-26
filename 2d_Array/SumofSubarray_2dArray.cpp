#include<bits/stdc++.h>

using namespace std;

int sumOfSubarrays(int a[][100],int n,int m){
	int sum=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			int tl=(i+1)*(j+1);
			int br=(n-i)*(m-j);
			sum+=(tl*br)*a[i][j];
		}
	}
	return sum;
}

int main()
{
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts
	
	int n,m;
	cin>>n>>m;
	int a[100][100]={0};
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	cout<<sumOfSubarrays(a,n,m);
	return 0;
}
