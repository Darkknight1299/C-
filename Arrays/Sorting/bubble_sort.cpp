#include<bits/stdc++.h>
using namespace std;

int bubble_sort(int a[],int n){
	for(int itr=0;itr<=n-1;itr++){
		for(int j=0;j<=(n-itr-1);j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
			}
		}
	}
}

int main()
{
	int a[1000],n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	bubble_sort(a,n);
	for(int i=0;i<=n;i++){
		cout<<a[i]<<",";
	}
	
}
