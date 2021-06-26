#include<bits/stdc++.h>

using namespace std;

int b[100][100]={0};

void prefixSum(int a[][100],int n,int m){
	 b[0][0] = a[0][0];

	for (int i = 1; i < n; i++) 
        b[0][i] = b[0][i - 1] + a[0][i]; 
    for (int i = 0; i < m; i++) 
        b[i][0] = b[i - 1][0] + a[i][0]; 
	
	for(int i=1;i<n;i++){
		for(int j=1;j<m;j++){
			b[i][j] = b[i - 1][j] + b[i][j - 1] - b[i - 1][j - 1] + a[i][j]; 
		}
	}
}
 
int sumOfSubarray(int a[][100],int a0,int a1,int b0,int b1){
	int sum=a[b0][b1]-a[a0-1][b1]-a[b0][a1-1]+a[a0-1][a1-1];
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
	int t;
	cin>>t;
	while(t){
		int a0,a1;
		cin>>a0>>a1;
		int b0,b1;
		cin>>b0>>b1;
		cout<<sumOfSubarray(b,a0,a1,b0,b1);
		t--;
	}
	return 0;
}
