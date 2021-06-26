#include<bits/stdc++.h>
#include<vector>
using namespace std;

//Implementation of stack using vector
template<typename T>;

class stack{
private:
  vector<T> v;
public:
  void push(T data){
    v.push_back(data);
  }

  bool isempty(){
    return v.size()==0;
  }

  void pop(){
    v.pop_back();
  }

  T top(){
    return v[v.size()-1];
  }
};

int main()
{  
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  stack<int> s;

  for(int i=0;i<=5;i++){
    s.push(i*i);
  }

  //Print all elements by poping each element
  while(!isempty()){
    cout<<s.top()<<endl;
    s.pop();
  }
}