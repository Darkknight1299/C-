#include<bits/stdc++.h>
using namespace std;

int main () {
	
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif  
   
    int n,i,j;
    cin>>n;
    int c=n-1;
    int k=0;
    for(int i=1;i<=2*n-1;i++){
        cout<<"*";
    }
    cout<<endl;
    for(int i=1;i<=n-1;i++){
        for(int j=1;j<=c;j++){
            cout<<"*";
        }
        for(int j=1;j<=n-c+k;j++){
            cout<<" ";
        }
        for(int j=1;j<=c;j++){
            cout<<"*";
        }
        c--;
        k++;
        cout<<endl;
    }
    int b=2;
    int a=n;
    for(int i=1;i<=n-2;i++){
       for(int j=1;j<=b;j++){
        cout<<"*";
       }
       for(int j=1;j<=a;j++){
        cout<<" ";
       }
       for(int j=1;j<=b;j++){
        cout<<"*";
       }
       a-=2;
       b++;
       cout<<endl;
    }
    for(int i=1;i<=2*n-1;i++){
        cout<<"*";
    }
       
}


 

  
   