#include<bits/stdc++.h>

using namespace std;

int main()
{
   char a;
   int i;
   cin>>a;
   for(i='a';i<='z';i++){
      if(i==a){
         cout<<"lowercase";
         exit(0);
      }
   }
   for(i='A';i<='Z';i++){
      if(i==a){
         cout<<"UPPERCASE";
         exit(0);
      }
   }
   cout<<"Invalid";
}