#include<bits/stdc++.h>
using namespace std;

void magical(char a[][100],int n,int m,int k,int s){
	bool success=true;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			char ch=a[i][j];
			if(s<k){
				success=false;
				break;
			}
			if(ch=='.'){
				s-=2;
			}
			else if(ch=='*'){
				s+=5;
			}
			else{
				break;
			}
			if(j!=m-1){
				s-=1;
			}
		}
	}
	if(success)
	{
		cout<<"Yes"<<endl<<s;
	}
	else
	{
		cout<<"No";
	}
}
	
int main()
{
	int n,m,k,s;
	cin>>n>>m>>k>>s;
	char a[100][100];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	magical(a,n,m,k,s);	
}

