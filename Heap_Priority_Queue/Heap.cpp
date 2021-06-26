#include<bits/stdc++.h>
#include<vector>
using namespace std;

class Heap{
  vector<int> v;
  bool minHeap;

  bool compare(int a,int b){
    if(minHeap){
      return a<b;
    }
    else{
      return a>b;
    }
  }

  void heapify(int idx){
    int left=2*idx;
    int right=left+1;  ///left and right children indexes

    int min_index=idx;
    int last=v.size()-1;

    if(left<=last and compare(v[left],v[idx])){
      min_index=left;
    }
    if(right<=last and compare(v[right],v[min_index])){
      min_index=right;
    }
    //after these two steps min_index will point to the minimun element of these 3

    if(min_index!=idx){
      swap(v[idx],v[min_index]);
      heapify(min_index);
    }
  }

public:
  Heap(int default_size=10,bool type= true){
    v.reserve(default_size);
    v.push_back(-1); //block zeroth index
    minHeap=type;
  }

  void push(int data){
    v.push_back(data);
    int idx=v.size()-1;
    int parent=idx/2;

    //keep pushing to the top untill you reach top or the current element is already greater than parent element(minHeap)
    while(idx>1 and compare(v[idx],v[parent])){
      swap(v[idx],v[parent]);
      idx=parent;
      parent=parent/2;
    }
  }

  int get(){
    return v[1];
  }

  void pop(){
    swap(v[1],v[v.size()-1]);
    v.pop_back();
    heapify(1);  //give index which node is to be placed right
  }

  bool empty(){
    return v.size()==1;
  }
};

int main()
{   
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  Heap h;
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    int no;
    cin>>no;
    h.push(no);
  }
  
  while(!h.empty()){
     cout<<h.get()<<" ";
     h.pop();
  }
}