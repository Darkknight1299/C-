#include<bits/stdc++.h>
using namespace std;

class node{
public:
  int data;
  node* next;

  node(int d){
    data=d;
    next=NULL;
  }
};

void print(node* head){ //passing head by value tp not affect linkedlist
  while(head!=NULL){
    cout<<head->data<<" ";
    head=head->next;
  }
}

node* takeinput(){
  int d;
  cin>>d;//
  node* head=NULL;
  while(d!=-1){ //make condition as cin>>d; to take input from a file till input is there(line with // infront of them in this function should also be removed to take input from a file).
    insertAtHead(head,d);
    cin>>d;//
  }
  return head; 
}

ostream& operator<<(ostream &os,node* head){
  print(head);
  return os;
}

istream& operator>>(istream &is,node* head){
  head=take_input();
  return is;
}

node* merge(node* a,node* b){
  //base case
  if(a==NULL){
    return b;
  }
  if(b==NULL){
    return a;
  }

  node* c=NULL;
  if(a->data<b->data){
    c=a;
    c->next=merge(a->next,b);
  }
  else{
    c=b;
    c->next=merge(a,b->next);
  }
  return c;
}

int main()
{  
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  node* head1=NULL;
  node* head2=NULL;
  cin>>head1>>head2;
  node* head=merge(head1,head2);

  print(head);
}