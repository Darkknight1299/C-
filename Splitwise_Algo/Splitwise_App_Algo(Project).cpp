#include<bits/stdc++.h>
#include<set>
using namespace std;

int main()
{   
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  int no_of_transactions,friends;
  cin>>no_of_transactions>>friends;

  int x,y,amount;

  //Make a 1-d array to store the net amount that each person has to take in the end
  int net[100000]={0};

  while(no_of_transactions--){
    cin>>x>>y>>amount;
    net[x]-=amount;
    net[y]+=amount;
  }

  //init a list and sort
  multiset<int> m;
  for(int i=0;i<friends;i++){
    if(net[i]!=0){
      m.insert(net[i]);
    }
  }

  //pop out two person left and right and settle them
  int cnt=0;
  while(!m.empty()){
    auto low=m.begin();
    auto high=prev(m.end());

    int debit=*low;
    int credit=*high;

    //erase
    m.erase(low);
    m.erase(high);

    //settlement
    int settlement_amount=min(-debit,credit);
    cnt++;

    //settlement amount from done rto acceptor
    debit+=settlement_amount;
    credit-=settlement_amount;

    if(debit!=0){
      m.insert(debit);
    }
    if(credit!=0){
      m.insert(credit);
    }
  }
  cout<<cnt;
}