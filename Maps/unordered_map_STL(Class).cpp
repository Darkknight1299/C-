#include<bits/stdc++.h>
#include<unordered_map>
#include<cstring>
using namespace std;

class Student{
public:
  string firstname;
  string lastname;
  string rollNo;

  Student(string f,string l,string no){
    firstname=f;
    lastname=l;
    rollNo=no;
  }

  bool operator==(const Student &s)const{
    return rollNo == s.rollNo?true:false;
  }
};

class HashFn{
public:
  size_t operator()(const Student &s)const{  //size_t gives size of memory
    return s.firstname.length()+s.lastname.length();
  }
};

int main()
{   
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  unordered_map<Student,int,HashFn> student_map;

  Student s1("Lakshay","Rana","012");
  Student s2("Rahul","Kumar","015");
  Student s3("Ayush","Chopra","010");
  Student s4("Rahul","Kumar","018");

  //Add student and marks to hashmap
  student_map[s1]=100;
  student_map[s2]=120;
  student_map[s3]=11;
  student_map[s4]=45;

  //Find the marks of student s3
  cout<<student_map[s3]<<endl;

  for(auto s:student_map){
    cout<<s.first.firstname<<" "<<s.first.rollNo<<" Marks "<<s.second<<endl;
  }
}