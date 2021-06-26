#include<iostream>
#include<algorithm>
using namespace std;

int main()
{  
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

   int n;
   cin>>n;
   int arr[100005];
   int res=0;
   for(int i=0;i<n;i++){
    cin>>arr[i];
    res=res^arr[i];
   }

   int temp=res;
   int pos=0;
   while((temp & 1)!=1){
      pos++;
      temp>>1;
   }

   int mask=(1<<pos);
   int x=0,y=0;
   for(int i=0;i<n;i++){
      int m=mask &  arr[i];
      if(m>0){
        x=x ^ arr[i];
      }
   }

   y=res ^ x;
   cout<<min(x,y)<<" "<<max(x,y)<<endl;
}