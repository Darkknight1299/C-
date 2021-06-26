#include<iostream>
using namespace std;

void prime_sieve(int p[]){
  // Marking all odd numbers as prime
  for(long i=3;i<=1000000;i=+2){
    p[i]=1;
  }
  //Making multiples of odd number not prime
  for(long i=3;i<=1000000;i=+2){
    if(p[i]==1){
      for(long j=i*i;j<=1000000;j++){
        p[j]=0;
      }
    }
  }
  p[2]=1;
  p[0]=p[1]=0;
}

int main () {
  int n;
  cin>>n;
  int a[1000000]={0};
  prime_sieve(a);
  for(int i=0;i<=n;i++){
    cout<<a[i];
  }
}
