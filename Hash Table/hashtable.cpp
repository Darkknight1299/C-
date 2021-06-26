#include<bits/stdc++.h>
#include<cstring>
#include"hashtable.h"
using namespace std;



int main()
{   
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  HashTable<int> price_menu;
  price_menu.insert("Burger",12);
  price_menu.insert("Pizza",30);
  price_menu.insert("Sandwich",75);
  price_menu.insert("Momo",25);
  price_menu.insert("coke",40);

  price_menu.print();

  int *price=price_menu.search("Sandwich");
  if(price==NULL){
    cout<<"Not Found";
  }
  else{
    cout<<"Price is "<<(*price)<<endl;
  }

  price_menu["Dosa"]=60;
  price_menu["Dosa"]+=10;
  cout<<price_menu["Dosa"]<<endl;
}