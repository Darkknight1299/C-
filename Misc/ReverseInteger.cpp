#include<bits/stdc++.h>
using namespace std;

int reverse(int A) {
    long long int ans=0;
    int per_digit=0;
    while(A){
        int temp=A%10;
        ans=ans*10+temp;
        if((ans-temp)/10!=per_digit){
            return 0;
        }
        A=A/10;
        per_digit=ans;
    }
    return ans;
}

int main () {
	
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif  
int A;
cin>>A;
cout<<reverse(A);
}

 

  
