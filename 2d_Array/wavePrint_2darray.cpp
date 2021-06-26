#include<bits/stdc++.h>

using namespace std;

int main()
{
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts
	
	int m,n,val=1;
	cin>>m>>n;
	int a[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			a[i][j]=val;
			val++;
		}
	}

	for(int col=0;col<n;col++){
		//when col is even go downwards
		if(col%2==0){
			for(int row=0;row<m;row++){
				cout<<a[row][col]<<" ";
			}
		}

		//when col is odd go upwards
		else{
			for(int row=n-1;row>=0;row--){
				cout<<a[row][col]<<" ";
			}
		}
	}
}
