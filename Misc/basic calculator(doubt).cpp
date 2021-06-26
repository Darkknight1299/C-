#include<bits/stdc++.h>

using namespace std;

int operation(char a,int i,int j){
   int b;
   if(a== '+'){
      b=i+j;
   }
   else if(a=='-'){
      b=i-j;
   }
   else if(a=='*'){
      b=i*j;
   }
   else if(a=='/'){
      b=i/j;
   }
   else if(a=='%'){
      b=i%j;
   }
   return b;
}
   

int main()
{  while(1){
   char a;
   int i,j,b;
   cin>>a;
   if(a!='+'&& a!='-'&& a!='*'&& a!='/'&& a!='%'){
      cout<<"Invalid operation. Try again.";
   }
   if(a=='x'|| a=='X'){
         break;
   }
   cin>>i>>j;
   cout<<operation(a,i,j);
   }
   
}