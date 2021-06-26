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
	int cs=0;
	int ms=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	//Kadane's Algo
	for(int i=0;i<n;i++){
		cs=cs+a[i];
		if(cs<0){
			cs=0;
		}
		ms=max(cs,ms);
	}

	cout<<"Maximum Sum is "<<ms;
}
