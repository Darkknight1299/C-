#include<bits/stdc++.h>
using namespace std;

template<typename T>

int search(T arr[],int n,T key){
  for(int p=0;p<n;p++){
    if(arr[p]==key){
      return p;
    }
  }
  return n;
}

template<class ForwardIterator,class T>

ForwardIterator search(ForwardIterator start,ForwardIterator end,T key){
  while(start!=end){
    if(*start==key){
      return start;
    }
    start++;
  }
  return end;
}

int main()
{  
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  int arr[]={1,2,3,5,10,12};
  int n=sizeof(arr)/sizeof(int);
  int key=10;
  cout<<search(arr,n,key)<<endl; 

  list<int> l;
  l.push_back(1);
  l.push_back(2);
  l.push_back(5);
  l.push_back(3);

  auto it=search(l.begin(),l.end(),5);

  if(it=end){
    cout<<"Not Found";
  }
  else{
    cout<<*it<<endl;
  }
}