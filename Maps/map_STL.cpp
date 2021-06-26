#include<bits/stdc++.h>
#include<map>
#include<cstring>
using namespace std;



int main()
{   
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  map<string,int> m;

  //1.insert
  m.insert(make_pair("Mango",100));

  pair<string,int> p;
  p.first="Apple";
  p.second=120;
  m.insert(p);

  m["Banana"]=20;

  //2.search
  string fruit;
  cin>>fruit;

  //update price
  m[fruit]+=22;
  auto it=m.find(fruit);
  if(it!=m.end()){
    cout<<"Price of "<<fruit<<" is "<<m[fruit]<<endl;
  }
  else{
    cout<<"Fruit is not present"<<endl;
  }

  //3.erase
  m.erase(fruit);

  //It stores unique key only once
  if(m.count(fruit)){ //gives 1 if it is present and 0 if not 
    cout<<"Fruit is present"<<endl;
  }
  else{
    cout<<"Fruit is not present"<<endl;
  }

  m["Litchi"]=60;
  m["Pineapple"]=80;

  //Iterate over all the key value pairs
  for(auto it=m.begin();it!=m.end();it++){
    cout<<it->first<<" and "<<it->second<<endl;
  }

  //for each loop
  for(auto p:m){
    cout<<p.first<<" : "<<p.second<<endl;
  } 
}