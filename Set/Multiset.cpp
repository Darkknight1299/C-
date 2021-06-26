#include<bits/stdc++.h>
#include<set>
using namespace std;

typedef multiset<int>::iterator It;

int main()
{   
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  int arr[]={10,20,30,30,30,10,10,20,30};
  int n=sizeof(arr)/sizeof(int);
  multiset<int> m(arr,arr+n); 

  for(auto x:m){
    cout<<x<<" ";
  }

  cout<<endl;
  m.erase(20);
  m.insert(80);
  cout<<m.count(10)<<endl;

  auto it=m.find(30);
  cout<<*it<<endl;

  //Get all elements that are equal to 30
  pair<It,It> range=m.equal_range(30);

  for(auto it=range.first;it!=range.second;it++){
    cout<<(*it)<<" ";
  }
  cout<<endl;

  //Lower bound <= and upper bound >
  for(auto it=m.lower_bound(10);it!=upper_bound(77);it++){
    cout<<(*it)<<" - "; 
  }
  cout<<endl;

  for(auto x:m){
    cout<<x<<" ";
  }
}

/*Multiset of custom class
Compare function-
class person_compare(){          (To comapre on the basis of int)
  public:
    bool operator()(pair<string,int> p1,pair<string,int> p2){
      return p1.second<p2.second;
    }
}


pair<string,int> p1=make_pair("B",100);
pair<string,int> p1=make_pair("A",200);
pair<string,int> p1=make_pair("D",50);
pair<string,int> p1=make_pair("C",80);

multiset<pair<string,int>,person_compare> m;
m.insert(p1);
m.insert(p2);
m.insert(p3);
m.insert(p4);

for(auto p:m){
  cout<<p.first<<" - "<<p.second;
}