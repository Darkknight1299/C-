#include<bits/stdc++.h>

using namespace std;

#define ll long long
const int mod = 1e9 + 7;
ll add(ll a, ll b){
    ll c= a+b;
    c%=mod;
    return c;
}
ll mul(ll a, ll b){
    ll c = (a*b)%mod;
    return c;
}
const int N = 5;

ll ar[N][N] , I[N][N];

void mat(ll a[][N] , ll b[][N]){
    ll res[N][N];
            
    for(int i =1 ;i<=2;++i){
        for(int j = 1;j<=2;++j){
            res[i][j] = 0LL;
            for(int k = 1;k<=2;++k){
                res[i][j] = add(res[i][j] , mul(a[i][k] , b[k][j]));
            }
        }
    } 
    
    for(int i = 1;i<=2;++i){
        for(int j = 1;j<=2;++j){
            a[i][j] = res[i][j];
        }
    }
}



int power(ll a[][N] ,int p){
    for(int i = 1;i<=2;++i){
        for(int j = 1;j<=2;++j){
            if(i == j)I[i][j] = 1LL;
            else I[i][j] = 0LL;
        }
    }
    
    while(p>0){
        if(p&1){
            mat(I,a);
            --p;
        }
        p/=2;
        mat(a,a);
        
        
    }
    ll ans = add(I[1][1] , I[1][2]);
    return (int)ans;
    
}







int solve(int A) {
    if(A == 0)return 0;
    ar[1][1] = 0LL;
    ar[1][2] = 1LL;
    ar[2][1] = 1LL;
    ar[2][2] = 1LL;
    int ans = power(ar , A - 1);
    return ans;
    
}
int main()
{
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  int A;
  cin>>A;
  cout<<solve(A);
}