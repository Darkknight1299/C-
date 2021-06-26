#include<bits/stdc++.h>
using namespace std;


int main()
{
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts
	
	int m,n;
	cin>>m>>n;
	int a[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}

	cout<<"Enter the key";
	int key;
	cin>>key;
	int row=0;
	int col=n-1;
	while(col>=0 and row<=m-1){
		if(a[row][col]>key){
			col--;
		}
		else if(a[row][col]<key){
			row++;
		}
		else{
			cout<<row<<" "<<col;
		}
	}	
}
