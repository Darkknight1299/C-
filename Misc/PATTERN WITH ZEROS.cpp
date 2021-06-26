#include<bits/stdc++.h>

using namespace std;

void zeros(int n){
    for(int i=0;i<n;i++){
        cout<<"0"<<'\t';
    }

}

int main()
{
    int n;
    cin>>n;
    int i,j;
    cout<<"1"<<'\n';
    for(i=2;i<=n;i++){
        
            cout<<i<<'\t';
            zeros(i-2);
            cout<<i;
        
    cout<<'\n';
    }

}