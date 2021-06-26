#include<bits/stdc++.h>

using namespace std;

int main()
{	
    int n,i,b=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        b=a[i]^b;
    }
    cout<<b;
	return 0;
}