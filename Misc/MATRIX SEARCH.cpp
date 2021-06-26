#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,i,j;
    cin>>n>>m;
    int a[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int x,cnt=0;
    cin>>x;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(a[i][j]==x){
                cnt++;
            }
        }
    }
    if(cnt==0){
        cout<<"0";
    }
    else{cout<<"1";}
}
