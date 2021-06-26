#include<bits/stdc++.h>
using namespace std;

class node{
public:
  int data;
  node* left;
  node* right;

  node(int d){
    data=d;
    left=NULL;
    right=NULL;
  }
};

node* buildtree(){
  int d;
  cin>>d;

  if(d==-1){
    return NULL;
  }

  node* root=new node(d);
  root->left=buildtree();
  root->right=buildtree();
  return root;
}

void printAsTree(node* root){
  queue<node*> q;
  q.push(root);
  q.push(NULL);

  while(!q.empty()){
    node* f=q.front();
    if(f==NULL){
      cout<<endl;
      q.pop();
      if(!q.empty()){
        q.push(NULL);
      }
    }
    else{
      cout<<f->data<<" ";
      q.pop();

      if(f->left){
       q.push(f->left);
      }
      if(f->right){
        q.push(f->right);
      }
    }
  }
  return;
}

node* buildTreefromArray(int *a,int s,int e){
  //base case
  if(s>e){
    return NULL;
  }
  //Rec Case
  int mid=(s+e)/2;
  node* root=new node(a[mid]);
  root->left=buildTreefromArray(a,s,mid-1);
  root->right=buildTreefromArray(a,mid+1,e);
  return root;
}

int main()
{  
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  int a[]={1,2,3,4,5,6,7};
  int n=sizeof(a)/sizeof(int);
  node* root=buildTreefromArray(a,0,n-1);
  printAsTree(root);
}