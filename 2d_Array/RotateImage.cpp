#include<bits/stdc++.h>
using namespace std;

void  reverse(int a[][1000],int n){
	for(int row=0;row<n;row++){
		int i=0;
		int j=n-1;
		while(i<j){
		swap(a[row][i],a[row][j]);
		i++;
		j--;
		}
	}
}

void transpose(int a[][1000],int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i<j){
			swap(a[i][j],a[j][i]);
		}
		}
	}
}

int main()
{
	int n;
	cin>>n;
	int a[1000][1000];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	reverse(a, n);
	transpose(a,n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}

