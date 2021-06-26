#include<bits/stdc++.h>
#include<vector>
using namespace std;

void print(vector<int> v){
  for(auto x:v){
    cout<<x<<" ";
  }
  cout<<endl;
}

bool minHeap=true;

bool compare(int a,int b){
  if(minHeap){
    return a<b;
  }
  else{
    return a>b;
  }
}

void heapify(vector<int> &v,int idx){ // send by reference so that changed get reflected in the base array
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
      heapify(v,min_index);
    }
  }

void buildheapoptimised(vector<int> &v){
  for(int i=((v.size()-1)/2);i>=1;i--){
    heapify(v,i);
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
  buildheapoptimised(v);
  print(v);
}