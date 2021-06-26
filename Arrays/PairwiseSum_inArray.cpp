#include<bits/stdc++.h>

using namespace std;

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
	for (int i = 0; i < n; i++){
		cin>>a[i];
	}
	int s;
	cout<<"Enter the sum needed ";
	cin>>s;
	int i=0;
	int j=n-1;
	while(i<j){
		int current_sum=a[i]+a[j];
		if(current_sum>s){
			j--;
		}
		else if(current_sum<s){
			i++;
		}
		else if(current_sum==s){
			cout<<a[i]<<","<<a[j]<<endl;
			i++;
			j--;
		}
	}
}
