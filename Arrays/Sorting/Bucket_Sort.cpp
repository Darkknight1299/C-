#include<bits/stdc++.h>
#include<vector>
using namespace std;

class Student{
public:
  int marks;
  string name;
};

//Bucket Sort to sort an array of students
void Bucket_sort(Student s[],int n){
  
  //Assuming Marks are in range 0-100
  vector<Student> v[101];

  for(int i=0;i<n;i++){
    int m=s[i].marks;
    v[m].push_back(s[i]);
  }

  //Iterate over the vector and print the students
  for(int i=100;i>=0;i--){
    for(auto it=v[i].begin();it!=v[i].end();it++){
      cout<<(*it).marks<<" "<<(*it).name<<endl;
    }
  }
}

int main()
{  
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  Student s[100000];

  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>s[i].marks>>s[i].name;
  }
  Bucket_sort(s,n);
}