#include<bits/stdc++.h>
using namespace std;

int main(){
	int i,j,a[3][3];
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cin>>a[i][j];
		}
	}
	for(j=0;j<3;j++){
	if(j%2==0){
		for(i=0;i<3;i++){
			cout<<a[i][j];
		}
	}
	else
	{
		for(i=2;i>=0;i--){
			cout<<a[i][j];
		}
		}	
	}
	}
