#include<bits/stdc++.h>
#include<climits>

using namespace std;

int MaxsumOfSubarray(int a[][100],int n,int m){
	//Col wise addition
	for(int i=n-1;i>=0;i--){
		for(int j=m-2;j>=0;j--){
			a[i][j]+=a[i][j+1];
		}
	}

	//Row wise addition
	for(int i=m-1;i>=0;i--){
		for(int j=n-2;j>=0;j--){
			a[i][j]+=a[j+1][i];
		}
	}

	int result=INT_MIN;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			result=max(result,a[i][j]);
		}
	}

	return result; 	
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
	cout<<MaxsumOfSubarray(a,n,m);
	return 0;
}
