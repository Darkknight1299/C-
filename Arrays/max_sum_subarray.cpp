#include<bits/stdc++.h>

using namespace std;

void generate_max_subarray(int a[],int n){
	int largestSum=0;
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			int currentsum=0;
			currentsum=cumSum[j]-cumSum[i-1];
			largestSum=max(currentsum,largestSum);
		}
	}
	cout<<largestSum;
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
	int cumSum[n]={0};
	cin>>a[0];
	cumSum[0]=a[0];
	for(i=1;i<n;i++){
		cin>>a[i];
		cumSum[i]=cumSum[i-1]+a[i];
	}
	generate_max_subarray(a,n);
}
