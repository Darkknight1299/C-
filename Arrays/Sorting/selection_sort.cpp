#include<bits/stdc++.h>
using namespace std;

int selection_sort(int a[],int n){
	for(int i=0;i<n-1;i++){
		int min_ind=i;
		for(int j=i;j<=n-1;j++){
			if(a[j]<a[min_ind])
			{
				min_ind=j;
			}
		}
		swap(a[i],a[min_ind]);
	}
}

int main()
{
	int a[1000],n;
	cin>>n;
	for(int i=0;i<=n;i++){
		cin>>a[i];
	}
	selection_sort(a,n);
	for(int i=0;i<=n;i++){
		cout<<a[i]<<",";
	}
	
}
