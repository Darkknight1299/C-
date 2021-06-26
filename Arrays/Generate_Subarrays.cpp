#include<bits/stdc++.h>

using namespace std;

void generate_subarray(int a[],int n){
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			for(int k=i;k<=j;k++){
				cout<<a[k]<<",";
			}
			cout<<endl;
		}
	}
}

int main()
{
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts
	
	int n;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	generate_subarray(a,n);
}
