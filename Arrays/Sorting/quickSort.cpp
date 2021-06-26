#include<bits/stdc++.h>
using namespace std;

int partition(int a[],int s,int e){
	int i=s-1;
	int j=s;
	int pivot=a[e];
	for(j=s;j<=e-1;j++){
		if(a[j]<=pivot){
			swap(a[i],a[j]);
			i++;	 	
		}
	}
	swap(a[i+1],a[e]);
	return i+1;
}

void quick_sort(int a[], int s, int e){
	if(s>=e){
		return;
	}
	int p=partition(a,s,e);
	quick_sort(a,s,p-1);
	quick_sort(a,p+1,e);
}

int main(){
	int a[1000];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	quick_sort(a,0,n-1);
	for(int i=0;i<=n;i++){
		cout<<a[i];
	}
}
