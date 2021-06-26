#include<bits/stdc++.h>
#include<queue>
using namespace std;

template<typename T>

class Stack{
  queue<T> q1,q2;
public:
  void push(T x){ //-O(1)
    q1.push(x);
  }

  void pop(){ //-O(N)
    //remove thelast added element from q1
    //we have to first move n-1 elements from q1 to q2
    //interchange names of q1 and q2
    if(q1.empty()){
      return;
    }

    while(q1.size()>1){
      T element=q1.front();
      q2.push(element);
      q1.pop();
    }

    q1.pop();

    //swap the names
    swap(q1,q2);
  }

  T top(){ //-O(N)
    while(q1.size()>1){
      T element=q1.front();
      q2.push(element);
      q1.pop();
    }

    T element=q1.front();
    q1.pop();
    q2.push(element);

    //swap the names
    swap(q1,q2);

    return element;
  }

  int size(){
    return q1.size()+q2.size();
  }

  bool empty(){
    return size()==0;
  }
};

int main()
{  
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  Stack<int> s;
  s.push(1);
  s.push(2);
  s.push(3);

  while(!s.empty()){
    cout<<s.top()<<endl;
    s.pop();
  }
}