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

node* createBSTfromPre(int* in,int *pre,int s,int e){
  static int i=0;
  if(s>e){
    return NULL;
  }
  node* root=new node(pre[i]);
  int index=-1;
  for(int j=s;j<=e;j++){
    if(in[j]==pre[i]){
      index=j;
      break;
    }
  }
  i++;
  root->left=createBSTfromPre(in,pre,s,index-1);
  root->right=createBSTfromPre(in,pre,index+1,e);
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

int main()
{   
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  int in[]={5,3,1,7,6,8};
  int n=sizeof(in)/sizeof(int);
  int pre[n];
  for(int i=0;i<n;i++){
    pre[i]=in[i];
  }
  sort(in,in+n);
  node* root=createBSTfromPre(in,pre,0,n-1);
  printAsTreeS(root);
}