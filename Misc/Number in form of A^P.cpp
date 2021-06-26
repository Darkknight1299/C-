#include<bits/stdc++.h>
using namespace std;

int isPower(int A) {
if(A==1)return 1;
else if(A<=3)return 0;
else
{
int i;
for(i=2;i<=sqrt(A);i++)
{
float ans= log(A)/log(i);
//cout<< ceil(ans)<<" "<<floor(ans)<<endl;
if(ceil(ans)==floor(ans))return 1;
}
return 0;
}

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
cout<<isPower(A);
}

 

  
