#include<iostream>
using namespace std;

void filterChar(int n,int a[]){
  int j=0;
  while(n>0){
    int last_bit=n&1;
    if(last_bit==1){
      cout<<a[j];
    }
    j++;
    n=n>>1;
  }
  cout<<endl;
}

void PrintSubsets(char a[]){
  int n=strlen(a);
  for(int i=0;i<(1<<n);i++){
    filterChar(i,a);
  }
  return;
}

int main()
{  
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  char a[100];
  cin>>a;
  PrintSubsets(a);
}