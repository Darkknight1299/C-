#include<bits/stdc++.h>
#include<queue>
using namespace std;

class Person{
public:
  string name;
  int age;

  Person(string n,int a){
    name=n;
    age=a;
  }
};

class cmparePerson{
public:
  bool operator()(Person a,Person b){
    return a.age<b.age;   //maxHeap
  }
};

int main()
{   
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  priority_queue<Person,vector<int>,cmparePerson> pq;
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    string name;
    int age;
    cin>>name>>age;
    Person p(name,age);
    pq.push(p);
  }
  int k=3;
  for(int i=0;i<k;i++){
    Person p= pq.top();
    cout<<p.name<<"->"<<p.age<<endl;;
    pq.pop();
  }
}