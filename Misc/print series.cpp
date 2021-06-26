#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n1,n2,i,j,count=0;
    cin>>n1>>n2;
    for(i=1;i<100;i++){
        j=(3*i)+2;
        if(j%n2!=0){
            cout<<j<<endl;
            count=count+1;
            if(count==n1){
            break;
            }
        }
    }
}
