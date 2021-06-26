#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,a,i,j=0;
    cin>>n>>a;
    while(n>0){
        i=n%10;
        if(i==a){
            j=j+1;
        }
        else{
            n=n/10;
        }
    }
   cout<<j;
}
