//Compare classes and generic search function(just like STL classes or functions are written by developers)

#include<bits/stdc++.h>
using namespace std;

class Book{
public:
  string name;
  int cost;

Book(string name,int cost){
  this->name=name;
  this->cost=cost;
}  
};

template<class ForwardIterator,class T,class compare>

ForwardIterator search(ForwardIterator start,ForwardIterator end,T key,compare cmp){
  while(start!=end){
    if(cmp(*start,key)){
      return start;
    }
    return end;
  }
}

class Knows_to_compare{
public:

  bool operator()(Book A,Book B){
    if(A.name==B.name){
      return true;
    }
    else{
      return false;
    }
  }
};

int main()
{  
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  Book b1("C++",100); // old edition
  Book b2("Java",150);
  Book b3("Python",130);

  list<Book> l;
  l.push_back(b1);
  l.push_back(b2);
  l.push_back(b3);

  Book b4("C++",110); // new edition
  Book key=b4;

  Knows_to_compare cmp;

  auto it=search(l.begin(),l.end(),key,cmp);
  if(it!=l.end()){
    cout<<"Book was found in the library";
  }
  else{
    cout<<"Not Found!";
  }

}