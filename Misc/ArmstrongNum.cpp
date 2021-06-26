#include<bits/stdc++.h>
using namespace std;

int digitcount(int n){
   int count=0;
   while(n){
      n=n/10;
      count++;
   }
   return count;
}

void isArmstrong(int n){
   int a=n,b,result=0,power;
   int count=digitcount(a);
   while(a){
      b=a%10;
      power = round(pow(b, count));
      result+=power;
      a=a/10;
   }

   if(result==n){
      cout<<"true";
   }
   else{
      cout<<"false";
   }
   
}

int main()
{  
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

   int n;
   cin>>n;
   isArmstrong(n);
   return 0;
}