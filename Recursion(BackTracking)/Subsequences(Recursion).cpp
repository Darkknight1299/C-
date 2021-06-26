#include<bits/stdc++.h>
using namespace std;

void generate_subsequences(char *in,char *out,int i,int j){
  //Base case
  if(i=='/0'){
    out[j]='/0';
    cout<<out;
    return;
  }

  //Rec Case
  //Include current char
  out[j]=in[i];
  generate_subsequences(in,out,i+1,j+1);

  //Exclude current char
  generate_subsequences(in,out,i+1,j);

}

int main()
{  
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  char input[]="abc";
  char output[10];
  generate_subsequences(input,output,0,0); 
}