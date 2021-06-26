#include<bits/stdc++.h>

using namespace std;

bool compare(string a,string b){
	if(a.length()==b.length()){
		return a<b;//lagsographical order
	}
	return a.length()<b.length();//returns ascending order with respect to length
}

int main()
{
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts
	
	string s[100];
	int n;
	cin>>n;
	cin.get();

	for(int i=0;i<n;i++){
		getline(cin,s[i]);
	}

	sort(s,s+n,compare);

	for(int i=0;i<n;i++){
		cout<<s[i]<<endl;
	}
}
