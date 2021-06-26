#include<iostream>
using namespace std;
int main()
{
	int n,i,j;
	cin>>n;
		cout<<"*";
		for(i=1;i<=(n-3)/2;i++)
		{
			cout<<" ";
		}
		for(i=1;i<=(n+1)/2;i++)
		{
			cout<<"*";
		}
		cout<<endl;
	
	for(i=1;i<=(n-3)/2;i++)
	{
		cout<<"*";
		for(j=1;j<=(n-3)/2;j++)
		{
			cout<<" ";
		}
		cout<<"*"<<endl;
	}
	for(i=1;i<=n;i++)
	{
		cout<<"*";
	}
	cout<<endl;
	for(i=1;i<=(n-3)/2;i++)
	{
		for(j=1;j<=(n-3)/2+1;j++)
		{
			cout<<" ";
		}
		cout<<"*";
		for(j=1;j<=(n-3)/2;j++)
		{
			cout<<" ";
		}
		cout<<"*"<<endl;
	}
	{
		for(i=1;i<=(n+1)/2;i++)
		{
			cout<<"*";
		}
		for(j=1;j<=(n-3)/2;j++)
		{
			cout<<" ";
		}
		cout<<"*";	
	}
}

