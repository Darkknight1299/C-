#include<bits/stdc++.h>
#include<vector>
using namespace std;

void print(vector<int> v){
  for(auto x:v){
    cout<<x<<" ";
  }
  cout<<endl;
}

bool minHeap=false;

bool compare(int a,int b){
  if(minHeap){
    return a<b;
  }
  else{
    return a>b;
  }
}

void heapify(vector<int> &v,int idx,int size){
    int left=2*idx;
    int right=left+1;  ///left and right children indexes

    int min_index=idx;
    int last=size-1;

    if(left<=last and compare(v[left],v[idx])){
      min_index=left;
    }
    if(right<=last and compare(v[right],v[min_index])){
      min_index=right;
    }
    //after these two steps min_index will point to the minimun element of these 3

    if(min_index!=idx){
      swap(v[idx],v[min_index]);
      heapify(v,min_index,size);
    }
  }

void buildheapoptimised(vector<int> &v){
  for(int i=((v.size()-1)/2);i>=1;i--){
    heapify(v,i,v.size());
  }
}

void heapSort(vector<int> &v){
  buildheapoptimised(v);
  int n=v.size();
  //remove n-1 elements;
  while(n>1){
    swap(v[1],v[n-1]);
    //remove last element from heap
    n--;
    heapify(v,1,n); //n is given so that last sorted elements dont get changed
  }
}

int main()
{   
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  vector<int> v{-1,10,20,5,6,1,8,9,4}; //heap
  print(v);
  heapSort(v);
  print(v);
}