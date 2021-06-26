#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int i,n;
    n=s.size();
    cout<<s[0];
    for(i=1;i<n;i++){
        if(s[i]!=s[i-1]){
            cout<<s[i];
        }
    }
}     