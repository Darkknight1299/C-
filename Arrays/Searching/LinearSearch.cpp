#include<bits/stdc++.h>

using namespace std;

int main()
{
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts
	
	int a[10];
	int n=sizeof(a)/sizeof(int);
	int i;
	cout<<"Enter the values in array";
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	int key;
	cout<<"Enter the value to be searched";
	cin>>key;
	for(i=0;i<n;i++){
		if(a[i]==key){
			cout<<key<<" found at "<<i<<" position";
			break;
		}
	}
	if(i==n){
		cout<<"Key is not present";
	}
}
