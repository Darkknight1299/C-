#include<bits/stdc++.h>
using namespace std; 

int main () {
	
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif

    long long int a,b,c;
    cin>>a>>b>>c;
    int d;
    d=(b*b)-(4*a*c);
    if(d<0){
        cout<<"Imaginary"<<endl;
    }
    else if(d==0){
        cout<<"Real and Equal"<<endl;
        int e;
        e=(-b+sqrt(d))/(2*a);
        cout<<e<<" "<<e;
    }
    else{
        cout<<"Real and Distinct"<<endl;
        int e,f;
        e=(-b+sqrt(d))/(2*a);
        f=(-b-sqrt(d))/(2*a);
        if(e<=f){
            cout<<e<<" "<<f;
        }
        else{
            cout<<f<<" "<<e;
        }
    }
}
  
   
   