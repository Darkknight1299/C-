#include<bits/stdc++.h>

using namespace std;

int gcd(int x, int y)
{
if(x==0)
return y;

 return gcd(y%x,x);
}

int cpFact(int a, int b)
{
while(gcd(a,b)!=1)
{
a= a/gcd(a,b);//mathematics says so
}
return a;

}

int main()
{
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  int a,b;
  cin>>a>>b;
  cout<<cpFact(a,b);
}