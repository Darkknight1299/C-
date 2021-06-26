#include<bits/stdc++.h>

using namespace std;

void print_spiral(int a[][1000],int m,int n){
	int startRow=0;
	int startCol=0;
	int endRow=m-1;
	int endCol=n-1;

	//start Row
	for(int i=startCol;i<=endCol;i++){
		cout<<a[startRow][i]<<" ";
	}
	startRow++;

	//end Col
	for(int i=startRow;i<=endRow;i++){
		cout<<a[i][endCol]<<" ";
	}
	endCol--;

	if(startRow<endRow){
		//end Row
		for(int i=endCol;i<=startCol;i--){
			cout<<a[endRow][i]<<" ";
		}
		endRow--;
	}

	if(startCol<endCol){
		//start Col
		for(int i=endRow;i<=startRow;i--){
			cout<<a[i][startCol]<<" ";
		}
		startCol++;
	}	
}

int main()
{
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts
	
	int m,n,val=1;
	cin>>m>>n;
	int a[1000][1000]={0};
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			a[i][j]=val;
			val++;
		}
	}

	print_spiral(a,m,n);

}
